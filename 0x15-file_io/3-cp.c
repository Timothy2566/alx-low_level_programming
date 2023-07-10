#include "main.h"
#include <stdio.h>

/**
 * error_file - function that checks if files can open
 * @file_from: first function prametr
 * @file_to: second function parameter
 * @argv: third function prameter
 * Return:return the necessary output
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - fuction that check the code of students.
 * @argc: first number of arguments.
 * @argv: second function parameter
 * Return: Always 0 upon success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t newchar, newer;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	newchar = 1024;
	while (newchar == 1024)
	{
		newchar = read(file_from, buffer, 1024);
		if (newchar == -1)
			error_file(-1, 0, argv);
		newer = write(file_to, buffer, newchar);
		if (newer == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
