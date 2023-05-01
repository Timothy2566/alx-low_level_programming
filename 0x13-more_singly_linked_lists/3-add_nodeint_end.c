#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a node to the end of the
 * linked list
 * @head:first function parameter
 * @m: second function parameter
 * Return: the necessary upon success
 */

listint_t *add_nodeint_end(listint_t **head, const int m)
{
	listint_t *joy;
	listint_t *josh = *head;

	joy = malloc(sizeof(listint_t));

	if (!joy)
		return (NULL);

	joy->n = m;
	joy->next = NULL;

	if (*head == NULL)
	{
		*head = joy;
		return (joy);
	}

	while (josh->next)
		josh = josh->next;

	josh->next = joy;

	return (joy);
}
