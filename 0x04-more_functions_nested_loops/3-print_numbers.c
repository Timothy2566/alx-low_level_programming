#include "main.h"

/**
 * print_numbers - prints the numbers from 0 up to 9
 *
 * Return: the number 0 - 9 when successful
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
