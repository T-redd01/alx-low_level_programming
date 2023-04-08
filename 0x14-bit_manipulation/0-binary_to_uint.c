#include "main.h"

/**
 * binary_to_uint - converts binary to num
 * @b: addr of 1st char to conv
 * Return: 0 if fail num if succeed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, idx = 0, pow2 = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[idx] != '\0')
		idx++;

	idx -= 1;
	while (idx)
	{
		if (b[idx] == '1')
			num += pow2;
		else if (b[idx] > '1' || b[idx] < '0')
			return (0);
		pow2 = pow2 << 1;
		idx--;
		if (pow2 == 0)
			pow2 = 1;
	}
	if (b[idx] == '1')
	{
		num += pow2;
	}
	else if (b[idx] > '1' || b[idx] < '0')
	{
		return (0);
	}
	return (num);
}

