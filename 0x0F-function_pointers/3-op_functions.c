#include "3-calc.h"

int op_add(int u, int v);
int op_sub(int u, int v);
int op_mul(int u, int v);
int op_div(int u, int v);
int op_mod(int u, int v);

/**
 * op_add - function taht add two numbers together
 * @u: first number
 * @v: second number
 *
 * Return: the sum of u and v
 */

int op_add(int u, int v)
{
	return (u + v);
}

/**
 * op_sub - function that subtracts two numbers
 * @u: first number
 * @v: second number
 *
 * Return: the difference of u and v
 */

int op_sub(int u, int v)
{
	return (u - v);
}

/**
 * op_mul - function that multiplies two numbers
 * @u: first number
 * @v: second number
 *
 * Return: the multiplication of u and v
 */
int op_mul(int u, int v)
{
	return (u * v);
}

/**
 * op_div - function that divide two numbers
 * @u: first number
 * @v: second number
 *
 * Return: the division of u and v
 */

int op_div(int u, int v)
{
	return (u / v);
}

/**
 * op_mod - function that remainder two numbers
 * @u: first number
 * @v: second number
 *
 * Return: the remainder of the division of u and v
 */

int op_mod(int u, int v)
{
	return (u % v);
}
