#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers follwed by a new line
 * @separator: first function parameter the string to b printed
 * @m: second function parameter the num of integer passed
 * @...: a variable number of the number printed
 */

void print_numbers(const char *separator, const unsigned int m, ...)
{
	va_list num_t;
	unsigned int index_t;

	va_start(num_t, m);

	for (index_t = 0; index_t < m; index_t++)
	{
		printf("%d", va_arg(num_t, int));

		if (index_t != (m - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num_t);

}
