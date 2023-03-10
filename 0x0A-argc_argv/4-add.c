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
	int i, x, j = 0;
	long conv;
	char *p;

	for (i = 1; i < argc; i++)
	{
		if (*(*(argv + i)) < '/' || *(*(argv + i)) > ':')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			conv = strtol(argv[i], &p, 10);
			x = conv;
			j += x;
		}
	}
	printf("%d\n", j);
	return (0);
}

