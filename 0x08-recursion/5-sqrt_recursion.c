#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @t: input
 *
 * Return: integer valu
 */

int _sqrt_recursion(int t)
{
	return (_sqrt(t, 1));
}

/**
 * _sqrt - calculate natural square num
 * @t: square root number to cal
 * @s: number to iterate
 * Return: the natural square root
 */

int _sqrt(int t, int s)
{
	int sqrt = s * s;

	if (sqrt > t)

		return (-1);

	if (sqrt == t)

		return (s);

	return (_sqrt(t, s + 1));
}
