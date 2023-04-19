#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array_t: first function parameter an array
 * @size: second function parameter size of arrary
 * @cmp: third function parameter for pointer to
 * func of one of the 3 in main
i *
 * Return: return -1 upon succeess
 */

int int_index(int *array_t, int size, int (*cmp)(int))
{
	int t;

	if (array_t == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		if (cmp(array_t[t]))
			return (t);
	}

	return (-1);
}
