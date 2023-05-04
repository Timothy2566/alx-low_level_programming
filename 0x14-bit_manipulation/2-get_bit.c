#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @q: first function oparameter
 * @index: second function parameter
 *
 * Return: the value of the bit at index index or -1 if an error occured
 *
 */

int get_bit(unsigned long int q, unsigned int index)
{

	int tobi;

	if (index > 63)
		return (-1);

	tobi = (q >> index) & 1;

	return (tobi);
}
