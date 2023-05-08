#include "stdlib.h"
#include "main.h"

/**
 * read_textfile - reads a file and prints a
 * specified number of characters to the stdout
 *
 * @filename: the file name
 * @letters: the number of letters to print
 * Return: letters (success), 0 (fail)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, w, r;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);
	return (w);
}
