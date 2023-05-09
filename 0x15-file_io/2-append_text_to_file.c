#include "main.h"

/**
 * append_text_to_file - appends
 * some text to an existing file
 *
 * @filename: the filename
 * @text_content: the content to be appended
 * Return: 1 (success), -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, letters;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		w = write(file, text_content, letters);
		if (w == -1)
			return (-1);
	}
	return (1);
}
