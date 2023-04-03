#include "lists.h"

/**
 * print_listint - prints value of nodes
 * @h: addr of 1st node
 * Return: 0 if emty numof nodesprint else
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
