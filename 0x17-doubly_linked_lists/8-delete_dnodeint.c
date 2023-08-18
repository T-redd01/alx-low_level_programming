#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: node of list
 * @index: index to delete
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h = *head;

	if (!(*head))
		return (-1);

	while (h->prev)
		h = h->prev;

	for (i = 0; h; i++)
	{
		if (i == index)
		{
			if (h->next)
				h->next->prev = h->prev;
			if (h->prev)
				h->prev->next = h->next;
			if (*head == h)
				*head = h->next;
			free(h);
			return (1);
		}
		h = h->next;
	}
	return (-1);
}
