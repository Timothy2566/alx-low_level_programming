#include <stdio.h>
#include <stdlib.h>


/**
 * main - the main function for the integer
 * @argc: the first function parameter
 * argument count
 * @argv: the second function parameter
 * argument vector
 * Return: 1 when successful except otherwise
 */

int main(int argc, char *argv[])
{
	int tim1;
	int tim2;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		tim1 = atoi(argv[1]);
		tim2 = atoi(argv[2]);

		mult = tim1 * tim2;

		printf("%d\n", mult);
	}

	exit(EXIT_SUCCESS);
}
