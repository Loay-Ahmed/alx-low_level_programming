#include "main.h"

/**
 * _isupper - checks for the uppercase letter
 *
 * @c: the char to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
