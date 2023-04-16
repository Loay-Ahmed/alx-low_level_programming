#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: pointer to the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!(*s))
	{
		return (len);
	}
	else
	{
		len++;
		return (_strlen_recursion(s + 1));
	}
}
