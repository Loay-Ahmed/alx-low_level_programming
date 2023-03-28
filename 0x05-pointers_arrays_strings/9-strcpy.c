#include "main.h"

/**
 * _strcpy - copies the string pointed to by str
 * to the variable pointed to by dest
 *
 * @src: pointer to string
 * @dest: pointer to string
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}
