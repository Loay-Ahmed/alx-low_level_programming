#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * error - handles error of reading and writing
 * @from: the source file
 * @to: the destination file
 * Return: Nothing
 */

void error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content
 * from a file to another
 *
 * @argc: the number of arguments
 * @argv: the list of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int from, to, error_close;
	ssize_t chars, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	
	error(from, to, argv);
	chars = 1024;
	while(chars == 1024)
	{
		chars = read(from, buffer, 1024);
		if (chars == -1)
			error(-1, 0, argv);
		w = write(to, buffer, chars);
		if (w == -1)
			error(0, -1, argv);
	}

	error_close = close(from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	error_close = close(to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
