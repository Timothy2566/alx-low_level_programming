#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: function parameter head
 *
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nike = head;
	listint_t *adidas = head;

	if (!head)
		return (NULL);

	while (nike && adidas && adidas->next)
	{
		adidas = adidas->next->next;
		nike = nike->next;

		if (adidas == nike)
		{
			nike = head;
			for (nike = head; nike != adidas; adidas = adidas->next)
			{
				nike = nike->next;
			}

			return (adidas);
		}
	}

	return (NULL);
}
