#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: array
 * @size: in btyes
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int t;
	int add1 = 0;
	int add2 = 0;

	for (t = 0; t < size; t++)
	{
		add1 = add1 + a[t * size + t];
	}

	for (t = size - 1; t >= 0; t--)
	{
	add2 += a[t * size + (size - t - 1)];
	}

	printf("%d, %d\n", add1, add2);
}
