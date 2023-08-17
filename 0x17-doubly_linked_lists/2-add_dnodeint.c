#include "lists.h"

/**
 * add_dnodeint - add node at beggining
 * @head: list node
 * @n: value of new node
 *
 * Return: new node (Success), NULL (Fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (tmp->prev)
		tmp = tmp->prev;
	tmp->prev = new;
	new->next = tmp;
	return (new);
}
