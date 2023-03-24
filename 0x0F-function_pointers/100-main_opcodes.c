#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: num of args passed
 * @argv: arr o args passed
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx\n", arr[i]);
	}
	return (0);
}

