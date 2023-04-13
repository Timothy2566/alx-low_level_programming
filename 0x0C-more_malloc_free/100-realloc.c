#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @tim: is a pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for tim
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: return ntim upon success
 */

void *_realloc(void *tim, unsigned int old_size, unsigned int new_size)
{
	char *ntim;
	unsigned int t;

	if (new_size == old_size)
		return (tim);
	if (tim == NULL)
	{
		ntim = malloc(new_size);

		if (ntim == NULL)
			return (NULL);

		return (ntim);
	}
	else
	{
		if (new_size == 0)
		{
			free(tim);
			return (NULL);
		}
	}

	ntim = malloc(new_size);

	if (ntim == NULL)
		return (NULL);
	t = 0;
	while (t < old_size && t < new_size)
	{
		ntim[t] = ((char *) tim)[t];
		t++;
	}

	free(tim);
	return (ntim);
}
