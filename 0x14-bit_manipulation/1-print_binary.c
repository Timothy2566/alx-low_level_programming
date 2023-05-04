#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @w: first function parameter
 *
 */

void print_binary(unsigned long int w)
{
	int t, joy = 0;
	unsigned long int present;

	t = 63;
	while (t >= 0)
	{

		present = w >> t;
		t--;

		if (present & 1)
		{

			_putchar('1');
			joy++;


		}

		else if (joy)
		{
			_putchar('0');

		}
	}
	if (!joy)
		_putchar('0');
}
