#include "main.h"

/**
 * read_textfile - reads given amount of bytes from file
 * @filename: name of file to read from
 * @letters: amount of chars to read
 * Return: number of bytes written to stdout or -1 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_b, wrote;
	char *buffer = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_b = read(fd, buffer, letters);
	if (read_b == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wrote = write(STDOUT_FILENO, buffer, read_b);
	if (wrote == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wrote);
}

