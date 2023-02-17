#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charVar;
	int intVar;
	long int longIntVar;
	long long int long2IntVar;
	float floatVar;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charVar));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(intVar));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longIntVar));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long2IntVar));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatVar));
	return (0);
}
