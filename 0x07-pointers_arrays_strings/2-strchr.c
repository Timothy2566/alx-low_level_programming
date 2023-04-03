#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 *
 * @buffer: address of the memory to printed
 * @size: the size of memory to be printed
 *
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int t;

	t = 0;
	while (t < size)
	{
		if (t % 10)
		{
			printf(" ");
		}
		if (!(t % 10) && t)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[t]);
		t++;
	}
}
