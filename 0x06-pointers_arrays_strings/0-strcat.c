#include "main.h"

/**
 * _strcat - This function concatenate two strings
 * dest, src in the dest
 *
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: the value othe value of  dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (*src != '\0')
	{
		dest[len] = *src;
		len++;
		src++;
	}

	dest[len] = '\0';
	return (dest);
}
