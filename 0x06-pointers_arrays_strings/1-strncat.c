#include "main.h"

/**
 * _strncat - This function concatenate two strings
 * dest, n bytes of src in dest
 *
 * @n: number of bytes to concatenate
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: the value othe value of  dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len] = *src;
		len++;
		src++;
	}

	dest[len] = '\0';
	return (dest);
}
