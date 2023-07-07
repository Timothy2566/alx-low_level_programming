#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a
 * given
 * @n: first function parameter
 * @index: second function parameter index
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (n == 0 && index < 64)
		return (0);

	for (t = 0; t <= 63; n >>= 1, t++)
	{
		if (index == t)
		{
			return (n & 1);
		}
	}
	return (-1);
}
