#include "main.h"

/**
 * binary_to_uint - function that converts to an unsigned int
 * @b: function parameter binary
 *
 * Return: the neccesary outputupon success
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int deci = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		deci = 2 * deci + (b[a] - '0');
	}

	return (deci);
}
