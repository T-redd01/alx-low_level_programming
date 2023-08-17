#include "lists.h"

/**
 * dlistint_len - find length of list
 * @h: node of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp = *h;

	if (!h)
		return (0);

	if (h->prev)
	{
		tmp = h->next;
		while (h)
		{
			nodes++;
			h = h->prev;
		}
	}

	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
