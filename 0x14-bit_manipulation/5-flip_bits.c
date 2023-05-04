#include "main.h"

/**
 * fli_bits -  function that returns the number of bits you would need to
 * flip to get from one number to another
 *
 * m: first function parameter
 * Q: secon function parameter
 *
 * Return: the necessary output
 */

unsigned int flip_bits(unsigned long int m, unsigned long int Q)
{
	int t, tim = 0;
	unsigned long int present;
	unsigned long int separate = m ^ Q;

	t = 63;
	while (t >= 0)
	{
		present = separate >> t;
		t--;
		if (present & 1)
		{
			tim ++;

		}
	}

	return (tim);
}
