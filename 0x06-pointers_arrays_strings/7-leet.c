#include "main.h"

/**
 * leet - encodes string
 * @sen: string to encode
 *
 * Return: address of string
 */
char *leet(char *sen)
{
	char lets[] = "aAeEoOtTlL";
	char cde[] = "4433007711";
	int i, j;

	for (i = 0; sen[i] != '\0'; i++)
	{
		for (j = 0; lets[j] != '\0'; j++)
		{
			if (sen[i] == lets[j])
				sen[i] = cde[j];
		}
	}
	return (sen);
}

