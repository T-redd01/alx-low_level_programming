#include "main.h"

/**
 * get_bit - finds val of bit at index
 * @n: num to find val
 * @index: index bit to find in n
 * Return: val of bit else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		comp = comp << 1;
		if (comp == 0)
			return (-1);
	}

	if (comp & n)
	{
		return (1);
	}
	return (0);
}

