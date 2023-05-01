#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: function parameter that points to the listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *josh;

	if (head == NULL)
		return;

	while (*head)
	{
		josh = (*head)->next;
		free(*head);
		*head = josh;
	}

	*head = NULL;
}
