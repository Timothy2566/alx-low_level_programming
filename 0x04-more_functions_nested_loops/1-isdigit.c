#include "main.h"

/**
 *  _isdigit - check if the character is digit
 *
 *  @c: is the function parameter
 *
 *  Return: 1 when succeful 0r 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
