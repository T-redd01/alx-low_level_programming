#include "lists.h"

/**
 * pop_listint - remove 1st node
 * @head: pointer to 1st node
 * Return: val of node removed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
