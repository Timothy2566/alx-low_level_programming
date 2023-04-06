#include "main.h"

/**
 * wildcmp -function that compares two strings
 * @t1: pointer the firdt string
 * @t2: pointer to the second string
 *
 * Return: returns 1 if the strings can be considered
 * identical, otherwise return 0
 */

int wildcmp(char *t1, char *t2)
{
	if (*t1 == '\0')
	{
		if (*t2 != '\0' && *t2 == '*'
				)
		{
			return (wildcmp(t1, t2 + 1));
		}

		return (*t2 == '\0');
	}

	if (*t2 == '*')

	{
		return (wildcmp(t1 + 1, t2) || wildcmp(t1, t2 + 1));
	}

	else if (*t1 == *t2)

	{
		return (wildcmp(t1 + 1, t2 + 1));
	}

	return (0);
}
