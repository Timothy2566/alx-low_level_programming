#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @m: function parameter
 * Return: the necessary
 */
size_t print_listint(const listint_t *m)
{
	size_t tim = 0;

	while (m)
	{
		printf("%d\n", m->n);
		m = m->next;
		tim++;
	}

	return (tim);
}
