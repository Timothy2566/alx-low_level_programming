#include "main.h"

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
	int s;
	int add1 = 0;
	int add2 = 0;

	for (t = 0; t <= (size * size); t = t + size + 1)
		add1 = add2 + a[t];
	for (s = size - 1; s <= (size * size) - size; s = s + size - 1)
		add2 = add2 + a[s];
	printf("%d, %d\n", add1, add2);
}
