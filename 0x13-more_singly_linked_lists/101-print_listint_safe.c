#include "lists.h"

size_t timothy_listint_size(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * timothy_listint_size - function that counts the number of node
 * @head: first function parameter
 * Return: the necessary output
 */

size_t timothy_listint_size(const listint_t *head)
{
	const listint_t *goat, *donkey;
	size_t fem = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	goat = head->next;
	donkey = (head->next)->next;

	while (donkey)
	{
		if (goat == donkey)
		{

			for (goat = head; goat != donkey; fem++)
			{
				goat = goat->next;
				donkey = donkey->next;
			}

			goat = goat->next;
			while (goat != donkey)
			{
				fem++;
				goat = goat->next;
			}

			return (fem);
		}

		goat = goat->next;
		donkey = (donkey->next)->next;

	}

	return (0);

}


/**
 * print_listint_safe - function that prints a listint_ list
 * @head: a pointer to the head
 * Return: the numers of fem
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t fem, tin = 0;

	fem = timothy_listint_size(head);

	if (fem == 0)
	{
		tin = 0;
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			fem++;

		}
	}

	else
	{
		for (tin = 0; tin < fem; tin++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			head = head->next;

		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (fem);
}
