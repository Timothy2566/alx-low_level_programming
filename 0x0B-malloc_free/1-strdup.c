#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 *
 * @str: Memory for the new string is obtained with malloc
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int b = 0;
	int t = 1;

	char *tim;

	if (str == NULL)
		return (NULL);

	while (str[t])
	{
		t++;
	}

	tim = malloc((sizeof(char) * t) + 1);

	if (tim == NULL)
		return (NULL);

	while (b < t)
	{
		tim[b] = str[b];
		b++;
	}

	tim[b] = '\0';

	return (tim);
}
