#include "lists.h"

/**
 * sum_listint - adds vals of list
 * @head: addr of 1st node
 * Return: sum of vals
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
