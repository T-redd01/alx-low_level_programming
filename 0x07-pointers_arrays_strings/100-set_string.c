#include "main.h"

/**
 * set_string - sets value of one string to address of another
 * @s: address of pointer
 * @to: address of other pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
