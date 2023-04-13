#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min_t: first functin parameter minimium
 * @max_t: second function parameter maximum
 *
 * Return: Return an integer
 */

int *array_range(int min_t, int max_t)
{
	int *m, t = 0;

	if (min_t > max_t)
		return (NULL);

	m = malloc((sizeof(int) * (max_t - min_t))+sizeof(int));

	if (m == NULL)
		return (NULL);

	while (min_t <= max_t)
	{
		m[t] = min_t;
		t++;
		min_t++;
	}

	return (m);
}
