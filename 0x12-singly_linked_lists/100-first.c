#include <stdio.h>

void print_first(void) __attribute__((constructor));
/**
 * print_first - function that executes before the main function executes
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

