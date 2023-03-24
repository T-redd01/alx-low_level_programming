#include "variadic_functions.h"

/**
 * print_strings - prints given strings
 * @separator: delimiter for strings
 * @n: num of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (!s)
			s = "(nil)";

		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");

	va_end(arg);
}

