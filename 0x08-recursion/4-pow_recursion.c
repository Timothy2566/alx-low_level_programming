#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of u raised to the power of v
 * @u: the value to be mulitplied
 *
 * @v: the times the value to be multiplied
 *
 * Return:the mutiplied value
 */
int _pow_recursion(int u, int v)
{
	if (v < 0)

		return (-1);

	if (v == 0)

		return (1);

	return (u * _pow_recursion(u, v - 1));
}
