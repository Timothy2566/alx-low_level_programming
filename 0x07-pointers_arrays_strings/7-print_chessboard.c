#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: always 0 upon success
 */
void print_chessboard(char (*a)[8])
{
	int t, n;

	for (t = 0; t < 8; t++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[t][n]);
		_putchar('\n');
	}
}
