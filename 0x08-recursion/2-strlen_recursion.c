#include "main.h"
/**
 * _strlen_recursion - function that calculate the lenght of string
 * @t: input
 *
 * Return: integer value
 */

int _strlen_recursion(char *t)
{
	if (*t == '\0')
	{
		return (0);
	}

	t++;

	return (_strlen_recursion(t) + 1);
}
