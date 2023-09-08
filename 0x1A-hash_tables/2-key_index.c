#include "hash_tables.h"

/**
 * key_index - gets index in table for key
 * @key: key string
 * @size: size of ht
 * Return: index of new slot in ht
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (!key)
		return (0);

	index = hash_djb2(key) % size;

	return (index);
}
