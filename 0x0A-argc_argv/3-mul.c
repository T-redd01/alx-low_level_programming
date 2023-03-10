#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: num of arguments given to cmdline
 * @argv: pointer to array of arguments to cmdline
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, x, j = 1;
	long conv;
	char *p;

	if (argc - 1 <= 1)
	{
		printf("Error\n");

		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (i == 1 || i == 2)
		{
			conv = strtol(argv[i], &p, 10);
			x = conv;
			j *= x;
		}
	}
	printf("%d\n", j);
	return (0);
}

