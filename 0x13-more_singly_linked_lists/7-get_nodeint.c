#include "lists.h"

/**
 * get_nodeint_at_index - return found node
 * @head: addr of 1st node
 * @index: index to find
 * Return: found node, null otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index && head != NULL; i++)
	{
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}

