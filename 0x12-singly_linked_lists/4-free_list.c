#include "lists.h"
#include <stdio.h>

/**
 * free_list - free each node of struct
 * @head: 1st node of list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

