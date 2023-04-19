#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print using function pointer
 * @name_t: function parameter that adds string
 * @p: pointer to function
 *
 * Return: nothing since its void
 */

void print_name(char *name_t, void (*p)(char *))
{
	if (name_t == NULL || p == NULL)
		return;

	p(name_t);
}
