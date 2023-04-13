#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @t: the size to be allocates
 *
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int t)
{
	void *tee;

	tee = malloc(t);

	if (tee == NULL)
		exit(98);

	return (tee);
}
