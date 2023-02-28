#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 2772, i = 0, j, random;
	char pass[100];
	time_t t;

	srand((int) time(&t));
	while (x > 126)
	{
		random = rand() % 126;
		pass[i] = random;
		x -= random;
		i++;
	}

	if (x > 0)
		pass[i] = x;
	else
		i--;

	for (j = 0; j <= i; j++)
	{
		printf("%c", pass[j]);
	}
	return (0);
}

