#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: list node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *back, *tmp;

	if (!head)
		return;

	back = head->prev;
	while (back)
	{
		tmp = back->prev;
		free(back);
		back = tmp;
	}

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
