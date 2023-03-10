#include "main.h"

/**
 * _abs - Gives absolute value of int
 * @i: int to check
 *
 * Return: if < 0 mult by -1, else return int
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= (-1);
		return (i);
	}
	else
	{
		return (i);
	}
}

