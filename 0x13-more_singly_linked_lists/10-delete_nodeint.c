#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * index of a listint_t linked list.
 * @head: first function parameter that points to the first element
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *josh = *head;
	listint_t *present = NULL;
	unsigned int t = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(josh);
		return (1);
	}

	for (; (t < index - 1); t++)
	{
		if (!josh || !(josh->next))
			return (-1);
		josh = josh->next;
	}
	present = josh->next;
	josh->next = present->next;
	free(present);

	return (1);
}
