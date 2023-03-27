#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 *
 * @s: pointer to the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	s += len;
	while (len--)
	{
		_putchar(*s);
		s--;
	}
}
