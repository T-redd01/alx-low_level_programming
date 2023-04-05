#include "lists.h"

/**
 * free_listint_safe - free list with loop
 * @h: pointer to 1st node
 * Return: num of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t len = 0;
	long int neg;

	if (*h == NULL)
		return (0);

	while (*h != NULL)
	{
		neg = *h - (*h)->next;
		if (neg < 0)
		{
			free(*h);
			len++;
			break;
		}
		next = (*h)->next;
		free(*h);
		*h = next;
		len++;
	}
	*h = NULL;
	return (len);
}
