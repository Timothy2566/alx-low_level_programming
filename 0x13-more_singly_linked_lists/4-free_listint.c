#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: firdt function parameter
 *
 */

void free_listint(listint_t *head)
{
	listint_t *josh;

	while (head)
	{
		josh = head->next;
		free(head);
		head = josh;
	}
}
