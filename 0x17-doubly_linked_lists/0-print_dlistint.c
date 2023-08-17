#include "lists.h"

/*
 * print_dlistint - print nodes of doubly linked list
 * @h: node in list
 *
 * Return: nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
