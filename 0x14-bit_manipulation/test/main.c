#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[5] = {'H', 'o', 'l', 4, '\0'};
	char buffer[60];
	int i;

	sprintf(buffer, "echo %s > 101-password", str);
	system(buffer);

	return (0);
}

