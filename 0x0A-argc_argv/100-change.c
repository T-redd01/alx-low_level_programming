#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: i of arguments given to cmdline
 * @argv: pointer to array of arguments to cmdline
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, cents, coins = 0, arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		for (i = 0; i < 5; i++)
		{
			if (cents - arr[i] >= 0)
			{
				cents -= arr[i];
				break;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}

