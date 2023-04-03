#include "lists.h"

/**
 * free_listint - frees list
 * @head: addr of 1st node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
