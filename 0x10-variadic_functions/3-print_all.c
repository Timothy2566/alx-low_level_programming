#include "variadic_functions.h"

void format_char(char *separator, va_list tim);
void format_int(char *separator, va_list tim);
void format_float(char *separator, va_list tim);
void format_string(char *separator, va_list tim);

/**
 * format_char - function that formats character
 * @separator: function para the string separator
 * @tim: second function para argument pointer
 */

void format_char(char *separator, va_list tim)
{
	printf("%s%c", separator, va_arg(tim, int));
}

/**
 * format_int - function that formats character
 * @separator: function para the string separator
 * @tim: second function para argument pointer
 */

void format_int(char *separator, va_list tim)
{
	printf("%s%d", separator, va_arg(tim, int));
}

/**
 * format_float - function that formats character
 * @separator: function para the string separator
 * @tim: second function para argument pointer
 */

void format_float(char *separator, va_list tim)
{
	printf("%s%f", separator, va_arg(tim, double));
}

/**
 * format_string - function that formats character
 * @separator: function para the string separator
 * @tim: secon function para argument pointer
 */

void format_string(char *separator, va_list tim)
{
	char *tims = va_arg(tim, char *);

	switch ((int)(!tims))
		case 1:
			tims = "(nil)";

	printf("%s%s", separator, tims);
}

/**
 * print_all - functionthat prints anything
 * @format: function parameter that format string
 *
 */

void print_all(const char * const format, ...)
{
	int t = 0, m;
	char *separator = "";
	va_list tim;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(tim, format);
	while (format && format[t])
	{
		m = 0;
		while (tokens[m].token)
		{
			if (format[t] == tokens[m].token[0])
			{
				tokens[m].f(separator, tim);
				separator = ", ";
			}
			m++;
		}
		t++;
	}
	printf("\n");
	va_end(tim);
}
