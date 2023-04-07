#include "main.h"

/**
 * get_endianess - finds whether machine is big endian or little endian
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int ref = 1;
	char *arr = (char *)&ref;

	if (*arr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

