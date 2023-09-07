#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...) {
	write(1, "49 65 50 7 25 - 6\n", 18);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
	return (0);
}
