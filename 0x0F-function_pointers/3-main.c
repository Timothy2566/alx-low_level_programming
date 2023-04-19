#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function that prints the result of simple operations
 * @argc: function parameter for argument count
 * @argv: function parameter argument vector
 *
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int tim1, tim2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	tim1 = atoi(argv[1]);
	op = argv[2];
	tim2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && tim2 == 0) || (*op == '%' && tim2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(tim1, tim2));

	return (0);
}
