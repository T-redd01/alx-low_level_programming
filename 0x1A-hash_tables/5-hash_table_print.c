#include "hash_tables.h"

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
			if (flag)
				printf(", '%s' : '%s'", list->key, list->value);
			else
				printf("'%s' : '%s'", list->key, list->value);
			flag = 1;
		}
	}
	puts("}");
}
