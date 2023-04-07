#include "main.h"

/**
 * set_bit - sets bit at given index
 * @n: num to set bit
 * @index: index of bit to set
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		comp = comp << 1;
		if (comp == 0)
			return (-1);
	}
	*n = comp | *n;
	return (1);
}

