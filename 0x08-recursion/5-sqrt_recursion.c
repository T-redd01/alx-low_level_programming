#include "main.h"

/**
 * square - find square of n
 * @n: num to find square
 * @count: increment until n
 * Return: -1 if no whole square, count if can square
 */
int square(int n, int count)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((count * count) > n)
	{
		return (-1);
	}
	else if ((count * count) == n)
	{
		return (count);
	}
	return (square(n, count + 1));
}

/**
 * _sqrt_recursion - calls square
 * Return: square func
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
