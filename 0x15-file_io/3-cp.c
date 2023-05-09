#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * make_cow - function that Allocates 1024 bytes for a buffer.
 * @tin: first function parameter that,The name of
 * the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated cow.
 */
char *make_cow(char *tin)
{
	char *cow;

	cow = malloc(sizeof(char) * 1024);
	if (cow == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", tin);
		exit(99);
	}
	return (cow);
}

/**
 * slip_tin - function that Closes file descriptors.
 * @tim: first function parameter that file descriptor to be slipped.
 */
void slip_tin(int tim)
{
	int t;

	t = close(tim);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tim);
		exit(100);
	}
}

/**
 * main - function that Copies the contents of a file to another file within
 * @argc: first function parameter that , the number of
 * arguments supplied
 * @argv: second function parameter of an array of pointers
 * to the arguments.
 *
 * Return: 0 on success if all goes well
 */
int main(int argc, char *argv[])
{
	int shey, vc, xd, w;
	char *cow;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cow = make_cow(argv[2]);
	shey = open(argv[1], O_RDONLY);
	xd = read(shey, cow, 1024);
	vc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (shey == -1 || xd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(cow);
			exit(98);
		}
		w = write(vc, cow, xd);
		if (vc == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(cow);
			exit(99);
		}
		xd = read(shey, cow, 1024);
		vc = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (xd > 0);

	free(cow);
	slip_tin(shey);
	slip_tin(vc);

	return (0);
}
