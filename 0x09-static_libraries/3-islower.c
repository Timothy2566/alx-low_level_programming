#include "main.h"
/**
 * _islower - function to prints in lower case
 *
 * @c: is the parameter to be printed
 *
 * Return: 1 if is a lower case and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
