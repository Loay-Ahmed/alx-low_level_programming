#include "main.h"

/**
 * create_file - creates a file
 * and write some content in it
 *
 * @filename: the filename
 * @text_content: the content to be written
 * Return: 1 (success), -1 (fail)
 */

int create_file(const char *filename, char *text_content)
{
	int file, letters, w;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters] != '\0'; letters++)
		;

	w = write(file, text_content, letters);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}
