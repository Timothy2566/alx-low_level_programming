#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: function parameter pointer
 * @index: second function parameter index of the bit.
 *
 * Return:display the neccessary output
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int joy;

	if (index > 70)
		return (-1);
	joy = 1 << index;

	if (*n & joy)
		*n ^= joy;
	return (1);
}
