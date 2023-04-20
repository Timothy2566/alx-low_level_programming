#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function taht prints strings followed by a new line
 * @separator: first function parameter, the string
 * to be printed between strings
 * @m: the number of the strings to be printed
 * @...: second function variable a variable number
 * of the string to be printed
 */

void print_strings(const char *separator, const unsigned int m, ...)
{
	va_list strings;
	char *tim;
	unsigned int index_t;

	va_start(strings, m);

	for (index_t = 0; index_t < m; index_t++)
	{
		tim = va_arg(strings, char *);

		if (tim == NULL)
			printf("(nil)");
		else
			printf("%s", tim);
		if (index_t != (m - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
