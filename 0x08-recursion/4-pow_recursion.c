#include "main.h"

/**
 * _pow_recursion - find x to power of y
 * @x: num to multiply
 * @y: times to multiply x
 * Return: if less than 0 - -1, if 0 - 1, call till y is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
