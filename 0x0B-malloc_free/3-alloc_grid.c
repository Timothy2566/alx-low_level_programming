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
	int t, j, k, l;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (t = 0; t < height; t++)
	{
		p[t] = malloc(sizeof(int *) * width);

		if (p[t] == NULL)
		{
			for (j = t; j >= 0; j--)
			{
				free(p[j]);
			}

			free(p);
			return (NULL);
		}

		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				p[k][l] = 0;
			}
		}
	}
	return (p);
}
