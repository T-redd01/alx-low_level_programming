#include "lists.h"

/**
 * get_dnodeint_at_index - retrieve node at index
 * @head: node of list
 * @index: idex of node to retrieve
 *
 * Return: node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
