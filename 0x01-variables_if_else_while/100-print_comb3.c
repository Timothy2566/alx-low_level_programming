#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 except otherwise
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; j < 10 ; j++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
