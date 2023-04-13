#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: first function parameter
 * @size: second function parameter in bytes
 * Return: return nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int t = 0, m = 0;
	char *tee;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;
	tee = malloc(m);

	if (tee == NULL)
		return (NULL);

	while (t < m)
	{
		tee[t] = 0;
		t++;
	}

	return (tee);
}
