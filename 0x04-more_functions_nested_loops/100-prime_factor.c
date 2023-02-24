#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int x;
	long int i;

	n = 612852475143;
	x = -1;

	while (n % 2 == 0)
	{
		x = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			x = i;
			n = n / i;
		}
	}

	if (n > 2)
		x = n;

	printf("%ld\n", x);

	return (0);
}
