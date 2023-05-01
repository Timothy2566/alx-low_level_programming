#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @index: where index is the index of the node, starting at 0
 * @head: function parameter
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *josh = head;

	while (josh && t < index)
	{
		josh = josh->next;
		t++;
	}

	return (josh ? josh : NULL);
}
