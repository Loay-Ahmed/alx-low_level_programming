#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 *
 * @s: pointer to the string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(_puts_recursion(++s));
	}
	else
		_putchar('\n');
}
