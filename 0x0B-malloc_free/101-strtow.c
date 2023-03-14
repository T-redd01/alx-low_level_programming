#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char_points - num of words in str
 * @str: str to count words
 * Return: num of words
 */
int char_points(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	return (count);
}

/**
 * count_lets - counts letters in words
 * @c: addr of 1st char
 * Return: num of lets
 */
int count_lets(char *c)
{
	int i = 0;

	while (c[i] != ' ' && c[i] != '\0')
		i++;
	return (i);
}

/**
 * free_func - frees mem on fail
 * @ptr: the ptr
 * @i: the index
 */
void free_func(char **ptr, int i)
{
	if (ptr != NULL && i != 0)
	{
		for (; i > 0; i--)
			free(ptr[i]);
		free(ptr[i]);
		free(ptr);
	}
}

/**
 * strtow - turns sentence into 2d arr of words
 * @str: string to use
 * Return: point to 2d arr
 */
char **strtow(char *str)
{
	int i, j = 0, k = 0, lets = 0;
	char **ptr = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	ptr = malloc((char_points(str) + 1) * sizeof(char *));
	if (ptr == NULL || char_points(str) == 0)
		return (NULL);

	for (i = 0; i < char_points(str); i++)
	{
		while (str[j] != '\0')
		{
			lets = 0;
			if (str[j] != ' ')
			{
				lets = count_lets(&(str[j]));
				break;
			}
			j++;
		}
		ptr[i] = malloc(lets * sizeof(char));
		if (ptr[i] == NULL)
		{
			free_func(ptr, i);
			return (NULL);
		}

		k = 0;
		for (; str[j] != '\0' && str[j] != ' '; j++)
		{
			if (k < lets)
				ptr[i][k] = str[j];
			k++;
		}
		ptr[i][k] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
