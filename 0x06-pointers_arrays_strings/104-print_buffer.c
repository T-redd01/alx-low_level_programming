#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buf by n size
 *@b: buff addr
 *@size: size to prin
 */
void print_buffer(char *b, int size)
{
	int bt, i;

	for (bt = 0; bt < size; bt += 10)
	{
		printf("%08x: ", bt);
		for (i = 0; i < 10; i++)
		{
			if ((i + bt) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + bt));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + bt) >= size)
				break;
			else if (*(b + i + bt) >= 31 && *(b + i + bt) <= 126)
				printf("%c", *(b + i + bt));
			else
				printf(".");
		}

		if (byte >= size)
			continue;
		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
