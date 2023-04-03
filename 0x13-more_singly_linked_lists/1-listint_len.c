#include "lists.h"

/**
 * listint_len - len of list
 * @h: addr of 1st node
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
