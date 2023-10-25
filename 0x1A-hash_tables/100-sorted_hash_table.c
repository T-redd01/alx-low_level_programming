#include "hash_tables.h"

int compare_str(char *s1, char *s2)
{
	unsigned int i;

	if (!s1 && !s2)
		return (1);

	if (!s1 && s2)
		return (0);

	if (s1 && !s2)
		return (1);

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (0);
	}
	if (s1[i] > s2[i])
		return (1);
	if (s2[i] > s1[i])
		return (0);
	return (0);
}

/**
 * shash_table_create - create / allocate for hash table
 * @size: size of table
 * Return: new table / NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new = NULL;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (!(new))
		return (NULL);

	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!(new->array))
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	return (new);
}

/**
 * shash_table_set - sets value in table
 * @ht: the has table
 * @key: key to set
 * @value: value to store
 * Return: 1 (Success), 0 (Failure)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new = NULL, *node = NULL;

	if (!ht || !key)
		return (0);

	idx = hash_djb2((const unsigned char *)key) % ht->size;

	node = ht->array[idx];
	while (node)
	{
		if (!(strcmp(key, node->key)))
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->sprev = NULL;
	new->snext = NULL;
	new->key = strdup(key);
	if (!(new->key))
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!(new->value))
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	/* not finished */
	return (1);
}

/**
 * shash_table_get - get value from table
 * @ht: the hash table
 * @key: key to find
 * Return: value at key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	idx = hash_djb2((const unsigned char *)key) % ht->size;
	tmp = ht->array[idx];
	while (tmp)
	{
		if (!(strcmp(key, tmp->key)))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print in order the table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	shash_node_t *list;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		while (list)
		{
			if (flag)
				printf(", '%s' : '%s'", list->key, list->value);
			else
			{
				flag = 1;
				printf("'%s' : '%s'", list->key, list->value);
			}
			list = list->next;
		}
	}
	puts("}");
}

/**
 * shash_table_print_rev - print in reverse the table
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	if  (!ht)
		return;
	printf("Not implemented\n");
}

/**
 * shash_table_delete - free entire table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;
	printf("Not implemented\n");
}
