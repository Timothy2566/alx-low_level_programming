#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array_t: function parameter
 * @size: elemets in size in btyes
 * @action_t: pointer
 *
 * Return: nothing since is void
 */

void array_iterator(int *array_t, size_t size, void (*action_t)(int))
{
	unsigned int t;

	if (array_t == NULL || action_t == NULL)
		return;

	t = 0;
	while (t < size)
	{
		action_t(array_t[t]);
		t++;
	}
}
