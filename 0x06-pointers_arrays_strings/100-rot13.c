#include "main.h"

/**
 * rot13 - encode str in rot13
 * @str: string to encode
 *
 * Return: address of string
 */
char *rot13(char *str)
{
	char lets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cdes[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lets[j] != '\0'; j++)
		{
			if (*(str + i) == *(lets + j))
			{
				str[i] = cdes[j];
				break;
			}
		}
	}
	return (str);
}

