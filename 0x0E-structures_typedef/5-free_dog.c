#include "main.h"
#include <stdlib.h>

/**
 * free_dog - free the previously allocated memory
 * @d: structure pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
