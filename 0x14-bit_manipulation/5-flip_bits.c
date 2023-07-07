#include "main.h"
/**
 * flip_bits - function that counts the number of bits to changie
 * @n: first function parameter
 * @m: second number parameter
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, kika = 0;
	unsigned long int here;
	unsigned long int separate = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		here = separate >> t;
		if (here & 1)
			kika++;
	}

	return (kika);
}
