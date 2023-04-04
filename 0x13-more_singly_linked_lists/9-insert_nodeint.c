#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to 1st node
 * @idx: index to put node
 * @n: value for new node
 * Return: new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new = NULL;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
}

