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

	ptr = malloc((nums1 + nums2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[j] = s1[i];
		j++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[j] = s2[i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
