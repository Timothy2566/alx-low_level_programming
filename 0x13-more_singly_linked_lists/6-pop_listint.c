#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list
 * @head: function parameter
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *josh;
	int tim;

	if (!head || !*head)
		return (0);

	tim = (*head)->n;
	josh = (*head)->next;
	free(*head);
	*head = josh;

	return (tim);
}
