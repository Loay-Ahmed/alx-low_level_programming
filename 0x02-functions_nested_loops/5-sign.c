#include "main.h"

/**
 * print_sign - checks for the sign of integer
 *
 * @n: integer to be checked
 * Return: 1 if n is positive, 0 if n is 0, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
