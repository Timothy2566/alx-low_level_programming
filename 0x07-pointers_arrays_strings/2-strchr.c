#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that searches for the first ocurrence of the character c
 * @s: the c string to be scanned
 * @c: this the character to be scanned
 * Return: 0 when succssfull execpt otherwise
 */

char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}
	return (NULL);
}
