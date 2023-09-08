#include "hash_tables.h"

/**
 * print_bucket - print list at index
 * @list: list to print
 * @flag: whether next value or first
 */
void print_bucket(hash_node_t *list, int *flag)
{
	while (list)
	{
		if (*flag)
		{
			if (list->value)
				printf(", [%lu] '%s' : '%s'", key_index((const unsigned char *)list->key, 1024), list->key, list->value);
			else
				printf(", [%lu] '%s' : ''", key_index((const unsigned char *)list->key, 1024), list->key);
		}
		else
		{
			if (list->value)
			{
				*flag = 1;
				printf("[%lu] '%s' : '%s'", key_index((const unsigned char *)list->key, 1024), list->key, list->value);
			}
			else
			{
				*flag = 1;
				printf("[%lu] '%s' : ''", key_index((const unsigned char *)list->key, 1024), list->key);
			}
		}
		list = list->next;
	}
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

	if (!ht || ht->size == 0)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		if (list)
		{
			print_bucket(list, &flag);
		}
	}
	puts("}");
}
