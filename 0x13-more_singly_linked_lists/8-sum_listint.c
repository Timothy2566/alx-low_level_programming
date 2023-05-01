#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: function parameter first node in the linked list
 *
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int dam = 0;
	listint_t *josh = head;

	while (josh)
	{
		dam += josh->n;
		josh = josh->next;
	}

	return (dam);
}
