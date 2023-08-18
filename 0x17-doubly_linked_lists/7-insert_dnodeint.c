#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*h) && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (*h && tmp->prev)
		tmp = tmp->prev;

	if (idx == 0)
	{
		new->next = tmp;
		tmp->prev = new;
		return (new);
	}

	for (i = 0; tmp; i++)
	{
		if ((i + 1) == idx)
		{
			if (tmp->next)
				tmp->next->prev = new;
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
