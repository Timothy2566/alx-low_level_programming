#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @m: fist function parameter
 * @index: second function parameter is the index, starting
 * from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *m, unsigned int index)
{
	if (index > 65)
		return (-1);

	*m = ((1UL << index) | *m);

	return (1);
}
