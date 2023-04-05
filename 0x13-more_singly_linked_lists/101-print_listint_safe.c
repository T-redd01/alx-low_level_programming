#include "lists.h"

/**
 * print_listint_safe - prints linked list and looks for loop
 * @head: 1st node
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hold = head;
	const listint_t *follow;
	size_t len = 0;
	size_t tomove;

	if (head == NULL)
		exit(98);

	while (hold != NULL)
	{
		len++;
		printf("[%p] %d\n", (void *)hold, hold->n);
		hold = hold->next;

		follow = head;
		tomove = 0;
		while (tomove < len)
		{
			if (hold == follow)
			{
				printf("-> [%p] %d\n", (void *)hold, hold->n);
				return (len);
			}
			follow = follow->next;
			tomove++;
		}
	}
	return (len);
}
