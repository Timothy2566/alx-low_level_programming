#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @i: function parameter
 *
 * Return: t always when succcesful
 */

int print_last_digit(int i)
{
	int t;

	t = i % 10;
	if (i < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
