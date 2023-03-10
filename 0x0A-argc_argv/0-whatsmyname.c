#include <stdio.h>

/**
 * main - Entry point
 * @argc: num of arguments given to cmdline
 * @argv: pointer to array of arguments to cmdline
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}

