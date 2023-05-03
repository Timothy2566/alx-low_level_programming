#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @m: function parameter
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **m)
{
	size_t size = 0;
	int gap;

	listint_t *josh;

	if (!m || !*m)
		return (0);

	for (size = 0; *m; size++)
	{
		gap = *m - (*m)->next;

		if (gap > 0)
		{
			josh = (*m)->next;
			free(*m);
			*m = josh;
		}

		else
		{
			free(*m);
			*m = NULL;
			size++;
			break;
		}
	}

	*m = NULL;

	return (gap);
}
