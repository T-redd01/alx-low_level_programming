#include "main.h"

/**
 * _islower - checks if char is lowercase
 *@c: The char to check
 *
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
