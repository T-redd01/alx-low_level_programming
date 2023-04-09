#include "main.h"

/**
 * read_fail - check if open or read fail
 * @val: return of open or read
 * @av: argv at index 1
*/
void read_fail(int val, char *av)
{
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
}

/**
 * write_fail - check if open to write or write fails
 * @val: return val of write or open
 * @av: argv at index 2
*/
void write_fail(int val, char *av)
{
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		exit(99);
	}
}

/**
 * close_fail - check if fail to close
 * @val: return val of close
 * @fdval: file descriptor val
*/
void close_fail(int val, int fdval)
{
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdval);
		exit(100);
	}
}

/**
 * main - Entry point, should copy to file
 * @ac: num of cli args
 * @av: 2d array of strings
 * Return: Always 0 (Success)
*/
int main(int ac, char **av)
{
	int read_b, wrote, from_fd, to_fd, close_from, close_to;
	char buffer[1024];
	char *file_from = av[1];
	char *file_to = av[2];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(file_from, O_RDONLY);
	read_fail(from_fd, av[1]);

	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC /*| O_NOCTTY*/, 0664);
	write_fail(to_fd, av[2]);
	
	read_b = read(from_fd, buffer, 1024);
	read_fail(read_b, av[1]);
	while (read_b != 0)
	{
		wrote = write(to_fd, buffer, read_b);
		write_fail(wrote, av[2]);
		read_b = read(from_fd, buffer, 1024);
		read_fail(read_b, av[1]);
	}
	close_from = close(from_fd);
	close_fail(close_from, from_fd);
	close_to = close(to_fd);
	close_fail(close_to, to_fd);

	return (0);
}

