#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!key || !ht)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
