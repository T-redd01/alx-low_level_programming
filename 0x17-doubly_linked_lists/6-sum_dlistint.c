#include "lists.h"

/**
 * sum_dlistint - adds all node values
 * @head: node of list
 *
 * Return: sum of all nodes, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *rev;

	if (!head)
		return (0);

	rev = head->prev;
	while (rev)
	{
		sum += rev->n;
		rev = rev->prev;
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
