#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number
 * @t: function parameter t
 *
 * Return: integer value upon success
 */

int factorial(int t)
{
	if (t < 0)
		return (-1);

	if (t <= 1)
		return (1);

	return (t * factorial(t - 1));
}
