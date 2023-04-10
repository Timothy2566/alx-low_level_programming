#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the main function for the integer
 * @argc: the first function parameter
 * argument count
 * @argv: the second function parameter
 * argument vector
 * Return: 0 and 1 when successful except otherwise
 */

int main(int argc, char *argv[])
{
	int t;
	int sum = 0;


	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		for (t = 1; t < argc; t++)
		{
			if (!atoi(argv[t]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[t]);
		}
		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);
}
