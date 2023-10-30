#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to which text is appended.
 * @text_content: The string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, i;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);
	if (text_content)
		i = write(f, text_content, strlen(text_content));

	if (i == -1)
		return (-1);
	close(f);
	return (1);
}

