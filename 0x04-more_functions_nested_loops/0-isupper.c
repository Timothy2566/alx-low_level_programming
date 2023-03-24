#include "main.h"

/**
 * _isupper - check whether a is upper
 * @c: is the function varable
 *
 * Return: 1 for upper or 0 when neccessary
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
