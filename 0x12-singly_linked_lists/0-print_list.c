#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a linked list
 * @T: first function parameter, the pointer to the list_t
 * list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *T)
{
	size_t m = 0;

	while (T)
	{
		if (!T->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", T->len, T->str);
		T = T->next;
		m++;
	}

	return (m);
}
