#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that return the summ of all parameter
 * in the function
 *
 * @m: function parameter numbers passed
 * @...: second function parameter to calculate the sum
 *
 * Return: Return the neccessry
 */

int sum_them_all(const unsigned int m, ...)
{
	va_list dami;
	unsigned int t, sum_t = 0;

	va_start(dami, m);

	t = 0;
	while (t < m)
	{
		sum_t += va_arg(dami, int);
		t++;
	}

	va_end(dami);

	return (sum_t);
}
