#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}

	free(grid);

}
