#include "lists.h"

/**
 * add_nodeint - adds node to begining
 * @head: pointer to 1st node
 * @n: val for new node
 * Return: null if fail, new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		*head = new;
		new->next = tmp;
	}
	return (new);
}
