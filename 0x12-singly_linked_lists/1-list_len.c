#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts number of nodes in linked list
 * @h: first node of list
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

