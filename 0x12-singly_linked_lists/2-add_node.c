#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds new node to top of the list like a stack
 * @head: pointer that points to struct
 * @str: value to enter
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}

