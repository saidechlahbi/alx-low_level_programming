#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - Reads a text file and prints
 *              it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t READ_numbers;
	ssize_t WRITE_numbers;
	char *buffer;

	if (!filename)
		return (0);
	fn = open(filename, O_RDONLY);
	if (fn != -1)
	{
		buffer = malloc(letters);
		if (!buffer)
			return (0);
		READ_numbers = read(fn, buffer, letters);
		WRITE_numbers = write(STDOUT_FILENO, buffer, READ_numbers);
		close(fn);
		free(buffer);
		return (WRITE_numbers);
	}
	return (0);
}
