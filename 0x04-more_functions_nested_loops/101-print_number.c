#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: function parameter that print
 *
 * Return: empty
 */

void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)
	{
	n *= -1;
	t = n;
	_putchar('-');
	}
	t /= 10;
	if (t != 0)
	print_number(t);
	_putchar((unsigned int) n % 10 + '0');
}
