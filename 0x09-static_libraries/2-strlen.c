#include "main.h"

/**
 * _strlen - calculates the length of a string
 * pointed to by pointers
 *
 * @s: pointer to string or array of char
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
