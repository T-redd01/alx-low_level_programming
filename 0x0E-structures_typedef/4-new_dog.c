#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new struct and assigns values to mems
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	(*d).name = malloc((strlen(name) + 1) * sizeof(char));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	(*d).name = name;

	(*d).owner = malloc((strlen(owner) + 1) * sizeof(char));
	if ((*d).owner == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	(*d).owner = owner;
	(*d).age = age;
	return (d);
}

