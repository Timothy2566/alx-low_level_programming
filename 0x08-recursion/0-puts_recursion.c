#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 * @t: the recursion parameter string
 *
 * Return: void
 */


void _puts_recursion(char *t)
{
	if (*t == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*t);
	t++;

	_puts_recursion(t);
}
