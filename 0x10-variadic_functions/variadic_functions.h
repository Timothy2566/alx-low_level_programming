#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>


/**
 * struct token - function that struck token
 *
 * @token: format token
 * @f: the function associated
 */

typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int _putchar(char c);
int sum_them_all(const unsigned int m, ...);
void print_numbers(const char *separator, const unsigned int m, ...);
void print_strings(const char *separator, const unsigned int m, ...);

void format_char(char *separator, va_list tim);
void format_int(char *separator, va_list tim);
void format_float(char *separator, va_list tim);
void format_string(char *separator, va_list tim);

void print_all(const char * const format, ...);


#endif
