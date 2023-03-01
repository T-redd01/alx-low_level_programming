#include "main.h"

/**
 * cap_string - cap 1st let of word
 * @arr: string to cap
 *
 * Return: address of string
 */
char *cap_string(char *arr)
{
	int i, j;
	char seps[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (i == 0 && arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (arr[i] == seps[j])
			{
				if (arr[i + 1] >= 'a' && arr[i + 1] <= 'z')
				{
					arr[i + 1] -= 32;
				}
			}
		}
	}

	return (arr);
}

