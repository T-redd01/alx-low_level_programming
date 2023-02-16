#include <stdio.h>

/**
 * main - prints sizeof for each declared datatype
 * return - return 0 on success, anything else for error
 */

int main(void)
{
	char charVar;
	int intVar;
	long int longIntVar;
	long long int longLongIntVar;
	float floatVar;

	printf("Size of a char: %d byte(s)\n", sizeof(charVar));
	printf("Size of a int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntVar));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));
	return (0);
}

