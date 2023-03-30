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
	*dest = *dest + *src + '\0';
	return (dest);
}
