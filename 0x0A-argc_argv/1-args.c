#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function for the integer
 * @argc: the first function parameter
 * argument count
 * @argv: the second function parameter
 * argument vector
 * Return: 0 when successful except otherwise
 */

int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
