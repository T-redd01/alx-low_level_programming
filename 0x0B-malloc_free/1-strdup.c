#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create array with given str
 * @str: string to copy
 * Return: addr of new arr
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc((i + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = str[i];
	return (ptr);
}

