#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name using given function
 * @name: name to print
 * @f: func pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

