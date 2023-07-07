#include "main.h"
/**
 * get_endianness - function that checks the endianness of a
 * system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int t;
	char *tim;

	t = 1;
	tim = (char *) &t;

	return ((int)*tim);
}
