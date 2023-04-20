#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: first function parameter that list of types
 * of arguments passed to the function
 * ...: second function parameter
 *
 */

void print_all(const char * const format, ...)
{
	int t = 0;
	char *tim, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 't':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					tim = va_arg(list, char *);
					if (!tim)
						tim = "(nil)";
					printf("%s%s", sep, tim);
					break;
				default:
					t++;
					continue;
			}
			sep = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(list);
}
