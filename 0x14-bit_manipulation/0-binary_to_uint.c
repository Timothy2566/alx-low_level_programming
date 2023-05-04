#include "main.h"

/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @m: function parameter that is pointing to a
 * string of 0 and 1 chars
 *
 * Return: the necessary ouput up on success
 */

unsigned int binary_to_uint(const char *m)
{
	int t;
	unsigned int tim = 0;

	if (!m)
		return (0);
	t = 0;
	while (m[t])
	{
		if (m[t] < '0' || m[t] > '1')
			return (0);
		tim = 2 * tim + (m[t] - '0');
		t++;
	}

	return (tim);
}
