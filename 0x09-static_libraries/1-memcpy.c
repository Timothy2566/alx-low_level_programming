#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function copies n
 *
 * @dest: input
 * @src: to memory area dest
 * @n: bytes from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		dest[t] = src[t];

	return (dest);
}
