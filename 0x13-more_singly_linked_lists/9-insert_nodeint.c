#include "lists.h"

/**
 * insert_nodeint_at_index  - function that inserts a new
 * node at a given position
 * @head: function parameter
 * @idx: is the index of the list where the new node
 * should be added. Index starts at 0
 * @m: second function parameter
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int m)
{
	unsigned int t;
	listint_t *joy;
	listint_t *josh = *head;

	joy = malloc(sizeof(listint_t));
	if (!joy || !head)
		return (NULL);

	joy->n = m;
	joy->next = NULL;

	if (idx == 0)
	{
		joy->next = *head;
		*head = joy;
		return (joy);
	}

	for (t = 0; josh && t < idx; t++)
	{
		if (t == idx - 1)
		{
			joy->next = josh->next;
			josh->next = joy;
			return (joy);
		}

		else
			josh = josh->next;
	}

	return (NULL);

}
