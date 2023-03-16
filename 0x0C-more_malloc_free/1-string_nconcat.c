#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st str
 * @s2: snd str
 * @n: bytes to copy from s2
 * Return: addr of copied str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	ptr = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[j] = s1[i];
		j++;
	}

	for (i = 0; i < n; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

