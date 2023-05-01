#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds the beginning of
 * of a linked list
 *@head: the first function parameter, the first node to
 * to be pointed to
 *@m: second function parameter to insert data
 *Return: to return the ncecssary function
 */

listint_t *add_nodeint(listint_t **head, const int m)
{
	listint_t *joy;

	joy = malloc(sizeof(listint_t));

	if (!joy)
		return (NULL);

	joy->n = m;
	joy->next = *head;
	*head = joy;

	return (joy);
}
