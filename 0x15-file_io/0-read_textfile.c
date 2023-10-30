#include "main.h"
#include <stdio.h>
/**
 * read_text_file - Reads a text file and prints
 *               it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t READ_numbers;
	ssize_t WRITE_numbers;
	char *buffer;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i != -1)
	{
		buffer = malloc(letters);
		if (!buffer)
			return (0);
		READ_numbers = read(i, buffer, letters);
		WRITE_numbers = write(STDOUT_FILENO, buffer, READ_numbers);
		close(i);
		free(buffer);
		return (WRITE_numbers);
	}
	return (0);
}

