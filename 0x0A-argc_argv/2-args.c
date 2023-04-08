#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
	 int t;

	while (t < argc)
	{
		printf("%s\n", argv[t]);
			t++;
	}

	exit(EXIT_SUCCESS);
}
