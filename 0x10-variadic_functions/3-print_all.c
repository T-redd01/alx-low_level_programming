#include "variadic_functions.h"

/**
 * print_all - prints string and handle formats
 * @format: string / format to be printed
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg, double));
					break;
				case 's':
					s = va_arg(arg, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
	}
	printf("\n");

	va_end(arg);
}

