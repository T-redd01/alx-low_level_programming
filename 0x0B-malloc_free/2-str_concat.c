#include <stdio.h>
#include <stdlib.h>

/**
 * strcounter - count char in str
 * @s: string to count
 * Return: num of chars
 */
int strcounter(char *s)
{
	int i = 0;

	if (s == NULL)
		return (i);

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - combines 2 strings in new addr
 * @s1: 1st str
 * @s2: 2nd str
 * Return: addr of new str
 */
char *str_concat(char *s1, char *s2)
{
		int nums1 = strcounter(s1);
		int nums2 = strcounter(s2);
		int i, j = 0;
		char *ptr = NULL;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		ptr = malloc((nums1 + nums2 + 1) * sizeof(char));
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}

		for (i = 0; i < nums1; j++, i++)
			ptr[j] = s1[i];

		for (i = 0; i < nums2; j++, i++)
			ptr[j] = s2[i];
		ptr[j] = '\0';
		return (ptr);
}
