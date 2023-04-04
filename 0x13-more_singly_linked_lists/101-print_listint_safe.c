#include "lists.h"

/**
 * print_listint_safe - print linked list with loop inside
 * @head: addr 1st node
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp, *ptr1 = head, *ptr2 = head;
	size_t len = 0;
	char flag = '0';

	while (ptr2 != NULL && ptr2->next != NULL)
	{
		if (ptr1 == ptr2)
		{
			flag = '1';
			break;
		}
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
	}
	if (flag == '1')
	{
		while (tmp->next != ptr1->next)
		{
			ptr1 = ptr1->next;
			tmp = tmp->next;
		}

		tmp->next = NULL;
	}

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		len++;
	}
	return (len);
}
