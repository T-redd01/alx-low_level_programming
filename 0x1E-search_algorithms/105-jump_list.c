#include "search_algos.h"
#include <math.h>

/**
 * jump_list - jump to nodes to search
 * @list: list to search
 * @size: size of list
 * @value: value to find
 *
 * Return: node with val, null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, jmp = sqrt(size);
	listint_t *start = list;

	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (value == list->n)
			return (list);

		if (value < list->n || !(list->next))
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					start->index, list->index);
			while (start && start != list)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						start->index, start->n);
				if (start->n == value)
					return (start);
				start = start->next;
			}
		}

		start = list;
		if (!(list->next))
			break;
		while (list->next && i < jmp)
		{
			list = list->next;
			i++;
		}
		i = 0;
	}
	return (NULL);
}
