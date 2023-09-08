#include "hash_tables.h"

/**
 * print_bucket - print list at index
 * @list: list to print
 * @flag: whether next value or first
 */
void print_bucket(hash_node_t *list, int *flag)
{
	if (*flag)
		printf(", {");
	else
		putchar('{');
	*flag = 0;
	while (list)
	{
		if (*flag)
		{
			if (list->value)
				printf(", '%s' : '%s'", list->key, list->value);
			else
				printf(", '%s' : ''", list->key);
		}
		else
		{
			if (list->value)
			{
				*flag = 1;
				printf("'%s' : '%s'", list->key, list->value);
			}
			else
			{
				*flag = 1;
				printf("'%s' : ''", list->key);
			}
		}
		list = list->next;
	}
	putchar('}');
}

/**
 * hash_table_print - print entire hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i;
	hash_node_t *list = NULL;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		if (list && list->next)
			print_bucket(list, &flag);
		else if (list)
		{
			if (flag)
				printf(", '%s' : '%s'", list->key, list->value);
			else
			{
				flag = 1;
				printf("'%s' : '%s'", list->key, list->value);
			}
		}
	}
	puts("}");
}
