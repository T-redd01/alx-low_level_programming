#include "main.h"

/**
 * factorial - factorial of n
 * @n: num to find factorial
 * Return: if less 0 - -1, calls itself
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
