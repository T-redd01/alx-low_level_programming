#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 * @c: char to check
 *
 * Return: 1 if alphabet, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

