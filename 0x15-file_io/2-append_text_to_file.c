#include "main.h"

/**
 * append_text_to_file - if file exists appends given string to file
 * @filename: file to append to
 * @text_content: string to write to file
 * Return: 1 on success, -1 on fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrote;

	if (access(filename, F_OK) != 0 || access(filename, W_OK) != 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	wrote = write(fd, text_content, strlen(text_content));
	if (wrote == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

