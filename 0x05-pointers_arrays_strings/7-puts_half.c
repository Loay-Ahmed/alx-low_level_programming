#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: pointer to a string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	for (i = (len - 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');

}
