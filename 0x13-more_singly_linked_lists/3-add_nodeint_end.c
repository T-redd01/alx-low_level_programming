#include "lists.h"

/**
 * add_nodeint_end - add node to end
 * @head: pointer to 1st node
 * @n: val of new node
 * Return: new node or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
