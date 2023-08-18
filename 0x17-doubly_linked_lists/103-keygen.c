#include <stdio.h>

/**
 * main - Entry point
 * @ac: arg count
 * @av: vector of args
 *
 * Return: EXIT_SUCCESS (Success), EXIT_FAILURE (Fail)
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(2, "Usage: %s username", av[0]);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
