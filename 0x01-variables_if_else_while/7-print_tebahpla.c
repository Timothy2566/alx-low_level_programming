#include <stdio.h>

/**
 * main - main fnction
 *
 * Return: 0 always execpt otherwise
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
