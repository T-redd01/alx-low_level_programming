#include "lists.h"

/**
 * create_node - make a node
 * @n: value
 *
 * Return: node (Success), NULL (Fail)
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

/**
 * insert_dnodeint_at_index - insert node in given index
 * @h: node in list
 * @idx: index to insert at
 * @n: node value
 *
 * Return: node (Success), NULL (Fail)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp = *h;

	new = create_node(n);
	if (!new)
		return (NULL);

	if (!(*h) && idx == 0)
	{
		*h = new;
		return (new);
	}
	if (!(*h) && idx != 0)
		return (NULL);
	while (tmp->prev)
		tmp = tmp->prev;

	if (idx == 0)
	{
		new->next = tmp;
		tmp->prev = new;
		return (new);
	}
	for (i = 0; tmp; i++)
	{
		if (i + 1 == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
