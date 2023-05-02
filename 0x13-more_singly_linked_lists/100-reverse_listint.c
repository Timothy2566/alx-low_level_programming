#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: function parameter
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	for (; *head;  *head = next)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
	}

	*head = before;

	return (*head);
}
