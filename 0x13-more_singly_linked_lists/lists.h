#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *m);
size_t listint_len(const listint_t *m);
listint_t *add_nodeint_end(listint_t **head, const int m);
listint_t *add_nodeint(listint_t **head, const int m);
void free_listint(listint_t *head);

#endif