#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of a string
 *
 * @s: pointer to the string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
