#include "main.h"

/**
 * is_prime_number - if prime number
 * @t: the number to check
 *
 * Return: 1 if success and 0 if otherwise
 */

int is_prime_number(int t)
{
	return (love_prime(t, 1));
}

/**
 * love_prime - check if the the number is prime
 * @t: the number to check
 * @s: the iterates
 *
 * Return:  1 if success and 0 if otherwise
 *
 */

int love_prime(int t, int s)
{
	if (t <= 1)

		return (0);

	if (t % s == 0 && s > 1)

		return (0);

	if ((t / s) < s)

		return (1);

	return (love_prime(t, s + 1));
}
