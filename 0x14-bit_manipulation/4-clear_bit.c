#include "main.h"

/**
 * clear_bit - sets bit to 0 at index
 * @n: addr of num
 * @index: index of bit to clear
 * Return: 1 if worked -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		comp = comp << 1;
		if (comp == 0)
			return (-1);
	}
	if (comp & *n)
	{
		*n = *n - comp;
		return (1);
	}
	return (-1);
}

