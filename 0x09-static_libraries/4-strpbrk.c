#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: occurrence in the string
 * @accept:  bytes in the string accept
 *
 * Return: that matches one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int t, n;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[t] == accept[n])
				return (s + t);
		}
	}

	return (NULL);
}
