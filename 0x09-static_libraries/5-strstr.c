#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: first parameter of the func
 * @needle: second parameter of the func
 * Return:  the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *tie = haystack;
		char *shoe = needle;

		while (*tie == *shoe && *shoe != '\0')
		{
			tie++;
			shoe++;
		}

		if (*shoe == '\0')
			return (haystack);
	}

	return (NULL);
}
