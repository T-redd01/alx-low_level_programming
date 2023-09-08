#include "hash_tables.h"

/**
 * hash_table_get - get value at hash table
 * @ht: hash table to search
 * @key: key string
 * Return: value (Succes), NULL (Failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;

	if (!ht || !key || ht->size == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node)
	{
		if (!(strcmp(node->key, key)))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
