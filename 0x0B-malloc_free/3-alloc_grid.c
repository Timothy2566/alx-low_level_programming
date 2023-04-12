#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * @width: first function parameter
 * @height: second function parameter
 * Return: p upon success
 */
int **alloc_grid(int width, int height)
{
	int **tim;
	int u, v;

	if (width <= 0 || height <= 0)
		return (NULL);

	tim = malloc(sizeof(int *) * height);

	if (tim == NULL)
		return (NULL);

	for (u = 0; u < height; u++)
	{
		tim[u] = malloc(sizeof(int) * width);

		if (tim[u] == NULL)
		{
			for (; u >= 0; u--)
				free(tim[u]);

			free(tim);
			return (NULL);
		}

	}

	for (u = 0; u < height; u++)
	{
		for (v = 0; v < width; v++)
			tim[u][v] = 0;
	}

	return (tim);
}
