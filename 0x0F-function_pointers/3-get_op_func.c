/**
 * get_op_func - function that selects the correct function
 * @m: the operator passes as arugment
 *
 * Return: the pointer to the function
 */

#include "3-calc.h"
#include <stdlib.h>

int (*get_op_func(char *m))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int t = 0;

	while (ops[t].op != NULL && *(ops[t].op) != *m)
		t++;

	return (ops[t].p);
}
