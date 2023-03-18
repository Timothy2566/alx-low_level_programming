#include <stdio.h>
/**
 * main - main function
 *
 * Return: alway 0 except otherwise
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
