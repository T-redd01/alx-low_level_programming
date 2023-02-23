#include "main.h"

/**
 * _isupper - check if uppercase char
 * @c: char to check
 *
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	int i, j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
		{
			j = 0;
		}
	}
	return (j);
}
