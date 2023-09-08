#include "hash_tables.h"

/**
 * hash_table_set - sets value at slot in table
 * @ht: the hash table
 * @key: key string
 * @value: value to be stored
 * Return: 1 (Success), 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!key || !ht)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!(strcmp(key, tmp->key)))
		{
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
