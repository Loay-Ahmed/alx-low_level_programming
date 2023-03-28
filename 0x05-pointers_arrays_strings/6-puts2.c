#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: pointer to a string
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
