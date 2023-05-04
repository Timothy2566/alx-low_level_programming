#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 *
 * @m: first function parameter
 * @index: second function parameteris the index,
 * starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *m, unsigned int index)
{
	if (index > 80)
		return (-1);

	*m = (~(1UL << index) & *m);
	return (1);
}
