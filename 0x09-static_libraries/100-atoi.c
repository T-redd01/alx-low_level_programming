#include "main.h"

/**
 * _atoi - return int of string
 * @s: string to change
 *
 * Return: int num
 */
int _atoi(char *s)
{
	int x = 1, i = 0;
	unsigned int num = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	num *= x;
	return (num);
}

