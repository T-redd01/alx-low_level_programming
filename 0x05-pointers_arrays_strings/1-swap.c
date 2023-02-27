#include "main.h"

/**
 * swap_int - swops values of vars
 * @a: address of 1st var
 * @b: address of 2nd var
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

