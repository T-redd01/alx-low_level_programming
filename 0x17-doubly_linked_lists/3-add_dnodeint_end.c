#include "lists.h"

/**
 * add_dnodeint_end - append node
 * @head: node of list
 * @n: value for new node
 *
 * Return: node (Success), NULL (Fail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
