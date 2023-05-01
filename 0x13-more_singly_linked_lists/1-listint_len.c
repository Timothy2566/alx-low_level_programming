#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that return thr linked list
 * @m: first function parameter
 *
 * Return: the necessary output upon success
 */
size_t listint_len(const listint_t *m)
{
	size_t tim = 0;

	while (m)
	{
		m = m->next;
		tim++;
	}

	return (tim);
}
