#include "lists.h"

/**
 * find_listint_loop - moves fast and slow to find loop
 * @head: 1st node
 * Return: end of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort = head;
	listint_t *hare = head;

	if (head == NULL)
		return (NULL);

	while (hare != NULL && hare->nex != NULL)
	{
		tort = tort->next;
		hare = hare->next->next;
		if (hare == tort)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort);
		}
	}
	return (NULL);
}
