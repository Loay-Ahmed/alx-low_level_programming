#include "main.h"

/**
 * _puts - prints a string to the stdout
 *
 * @str: pointer to a string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
