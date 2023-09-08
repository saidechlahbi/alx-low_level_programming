#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to which text will be appended.
 * @text_content: The string to write and append to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn, r;

	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);
	if (text_content)
		r = write(fn, text_content, strlen(text_content));

	if (r == -1)
		return (-1);
	close(fn);
	return (1);
}
