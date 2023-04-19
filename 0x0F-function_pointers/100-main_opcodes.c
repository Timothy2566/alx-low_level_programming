#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that prints its own opcodes
 * @argc: function parameter arguments
 * @argv: array of argument
 *
 * Return: always 0 upon success
 */

int main(int argc, char *argv[])
{
	int bytes, t;
	char *tat;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	tat = (char *)main;

	for (t = 0; t < bytes; t++)
	{
		if (t == bytes - 1)
		{
			printf("%02hhx\n", tat[t]);
			break;
		}
		printf("%02hhx ", tat[t]);
	}

	return (0);
}
