#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_file - Creates a file and writes a text content to it.
 * @filename: The name of the file to create.
 * @text_content: The string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fn, r;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == 0)
		fn = open(filename, O_WRONLY | O_TRUNC);
	else
		fn = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	r = write(fn, text_content, strlen(text_content));

	if (r == -1)
		return (-1);
	close(fn);
	return (1);
}
