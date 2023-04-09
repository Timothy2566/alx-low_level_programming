#include "main.h"

/**
 * _memset -  function fills the first n bytes
 * of the memory area pointed to by s
 *
 * @s: pointed destination of the memory block
 * @b: charcter to fill the memory block
 * @n: number of bytes
 *
 * Return: alway 0 when successful except otherwise
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		s[t] = b;
	return (s);
}
