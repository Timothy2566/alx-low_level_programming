#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @t: the string *t to reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *t)
{
	if (*t == '\0')
	{
		return;
	}

	t++;

	_print_rev_recursion(t);
	t--;

	_putchar(*t);
}
