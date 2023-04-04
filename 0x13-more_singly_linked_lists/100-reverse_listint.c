#include "lists.h"

/**
 * reverse_listint - revers linked list
 * @head: pointer to 1st node
 * Return: first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}

