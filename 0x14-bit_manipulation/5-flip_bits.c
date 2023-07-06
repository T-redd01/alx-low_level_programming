#include "main.h"

/**
 * flip_bits - finds bits that arent flipped in both nums
 * @n: first num
 * @m: second num
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m, comp = 1;
	unsigned int num_bits = 0;

	while (comp)
	{
		if (comp & bits)
		{
			num_bits += 1;
		}
		comp = comp << 1;
	}
	return (num_bits);
}

