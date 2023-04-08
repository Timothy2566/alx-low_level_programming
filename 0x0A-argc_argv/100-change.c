#include <stdio.h>
#include <stdlib.h>
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
	int cents;
	int tim_coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;

		else if (cents >= 10)
			cents = cents - 10;

		else if (cents >= 5)
			cents = cents - 5;

		else if (cents >= 2)
			cents = cents - 2;

		else if (cents >= 1)
			cents = cents - 1;

		tim_coin++;
	}

	printf("%d\n", tim_coin);

	exit(EXIT_SUCCESS);
}
