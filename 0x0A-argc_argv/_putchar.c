#include "main.h"
#include "stdio.h"

/**
 * _putchar - prints a char
 *
 * @c: char to be printed
 * Return: 1 if success, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
