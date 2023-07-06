#include "main.h"

/**
 * binary_to_uint - conv bin sring to num
 * @b: addr of first char
 * Return: 0 if b is null, 0 if char not 1 or 0, num on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow2 = 1, idx;

	if (b == NULL)
	{
		return (0);
	}

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] > '1' || b[idx] < '0')
			return (0);
	}

	while (idx)
	{
		idx--;
		if (b[idx] == '1')
		{
			num += pow2;
		}
		pow2 *= 2;
	}
	return (num);
}

