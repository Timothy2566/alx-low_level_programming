#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: number of bytes accepted
 *
 * Return: Always 0 when successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				n++;
				break;
			}
			else if (accept[t + 1] == '\0')

				return (n);
		}

		s++;
	}
	return (n);
}
