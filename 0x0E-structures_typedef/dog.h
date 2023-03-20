#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: char pointer for name of dog
 * @age: dogs age as a float
 * @owner: char pointer for owner name
 *
 * Description: stuff about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

