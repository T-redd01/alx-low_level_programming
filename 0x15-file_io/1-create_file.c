#include "main.h"

/**
 * create_file - creates a file unless already exist
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC /*| O_NOCTTY*/, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wrote = write(fd, text_content, strlen(text_content));
	if (wrote == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

