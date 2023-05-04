#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian upon success
 *
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *k = (char *) &t;

	return (*k);
}
