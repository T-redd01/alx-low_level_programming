#include "main.h"

/**
 * _isdigit - check if uppercase char
 * @c: char to check
 *
 * Return: 1 if is a num, 0 otherwise
 */
int _isdigit(int c)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
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

