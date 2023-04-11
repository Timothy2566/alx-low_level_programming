#include "main.h"

/**
 * create_array -  function that creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size in bytes
 * @c: char to be assigned
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *tim;

	tim = malloc(sizeof(char) * size);

	if (size == 0 || tim == NULL)
		return (NULL);

	t = 0;
	while (t < size)
	{
		tim[t] = c;
		t++;
	}
	return (tim);
}
