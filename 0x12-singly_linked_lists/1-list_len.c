#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that return the number of elements in
 * a linked list
 *
 * @T: pointer to the list_t list
 *
 *Return: number of elements in T
 */

size_t list_len(const list_t *T)
{
	size_t t = 0;

	while (T)
	{
		t++;
		T = T->next;
	}

	return (t);
}
