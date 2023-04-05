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

	else

		return (1 + _strlen_recursion(t + 1));
}

/**
 * comparing - compare one another char of string
 * @t: input
 * @t1: smallest iterartor
 * @t2: biggest iterartor
 * Return: integer value
 *
 */

int comparing(char *t, int t1, int t2)
{
	if (*(t + t1) == *(t + t2))
	{
		if (t1 == t2 || t1 == t2 + 1)

				return (1);

		return (0 + comparing(t, t1 + 1, t2 - 1));
	}

	return (0);
}

/**
 * is_palindrome - if string is a palindrome
 * @t: string
 * Return: returns 1 if a string is a
 * palindrome and 0 if not
 */

int is_palindrome(char *t)
{
	if (*t == '\0')

		return (1);

	return (comparing(t, 0, _strlen_recursion(t) - 1));
}
