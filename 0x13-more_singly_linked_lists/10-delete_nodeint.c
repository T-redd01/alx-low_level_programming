#include "lists.h"

/**
 * delete_nodeint_at_index - removes node at index
 * @head: point to 1st node
 * @index: index of node to remove
 * Return: 1 for success, -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *hold;
	unsigned int i;

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	tmp = *head;
	for (i = 0; i < (index - 1) && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}
	else
	{
		hold = tmp->next;
		tmp->next = hold->next;
		free(hold);
		return (1);
	}
}
