#ifndef CALC_H
#define CALC_H

/**
 * struct op - function that struct op
 * @op: the operator
 * @p: the associated function
 */

typedef struct op
{
	char *op;
	int (*p)(int u, int v);
} op_t;

int op_add(int u, int v);
int op_sub(int u, int v);
int op_mul(int u, int v);
int op_div(int u, int v);
int op_mod(int u, int v);

int (*get_op_func(char *m))(int, int);

#endif
