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
	int i, j, x = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		x += atoi(argv[i]);
	}

	printf("%d\n", x);
	return (0);
}

