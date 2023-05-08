#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: first function parameter  text file being read
 * @letters: where letters is the number of letters it should read and print
 * Return: fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int age;
	ssize_t dim, joy;
	char *cow;

	if (!filename)
		return (0);

	age = open(filename, O_RDONLY);

	if (age == -1)
		return (0);
	cow = malloc(sizeof(char) * (letters));
	if (!cow)
		return (0);
	dim = read(age, cow, letters);
	joy = write(STDOUT_FILENO, cow, dim);

	close(age);
	free(cow);
	return (joy);
}
