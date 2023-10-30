#include "main.h"
#include <stdio.h>
/**
 * create_file - Creates a file with the given
 * filename and writes the specified text content.
 * @filename: The name of the file to be created.
 * @text_content: The string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == 0)
		fd = open(filename, O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	i = write(fd, text_content, strlen(text_content));

	if (i == -1)
		return (-1);
	close(fd);
	return (1);
}

