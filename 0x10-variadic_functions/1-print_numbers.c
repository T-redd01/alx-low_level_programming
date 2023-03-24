#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with given seperator
 * @separator: sep the nums
 * @n: num of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(arg, int));
		else if (separator && i == 0)
			printf("%d", va_arg(arg, int));
		else
			printf("%s%d", separator, va_arg(arg, int));
	}
	printf("\n");

	va_end(arg);
}

