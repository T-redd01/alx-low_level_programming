#include "main.h"

/**
 * string_toupper - convert string to upper
 * @arr: arr of string
 *
 * Return: address of 1st char
 */
char *string_toupper(char *arr)
{
	char caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, k, j = 0;

	for (k = 0; arr[k] != '\0'; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			if (arr[k] == i)
				arr[k] = *(caps + j);
			j++;
		}
		j = 0;
	}
	return (arr);
}

