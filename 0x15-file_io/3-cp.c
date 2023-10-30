#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, any other value on failure.
 */

int main(int ac, char *argv[])
{
	int ff, ft, err_close;
	int num_chars, numberofwrites;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_message(ff, ft, argv);
	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(ff, buffer, 1024);
		if (num_chars == -1)
			error_message(-1, 0, argv);
		numberofwrites = write(ft, buffer, num_chars);
		if (numberofwrites == -1)
			error_message(0, -1, argv);
	}
	err_close = close(ff);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	err_close = close(ft);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	return (0);
}
/**
 * error_message - Function that displays an error message.
 * @ff: The source filename.
 * @ft: The target filename.
 * @argv: A string containing additional information or error details.
 *
 * Return: Void (no return value).
 */

void error_message(int ff, int ft, char *argv[])
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n",
		"Error: Can't read from file ", argv[1]);
		exit(98);
	}

	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n",
		"Error: Can't write to ", argv[2]);
		exit(99);
	}
}

