#include <unistd.h>

/**
 * main - will print a string to stderr
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "%s", "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
