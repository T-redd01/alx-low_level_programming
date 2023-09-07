#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	
	if (!key)
		return (0);

	index = hash_djb2(key) % size;
	
	return (index);
}
