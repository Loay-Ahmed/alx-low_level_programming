#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 *
 * @b: a pointer to a string containing
 * the binary number
 * Return: Converted number (success),
 * 0 if b is NULL or b contains chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, conv;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, conv = 1; len >= 0; len--, conv *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			dec += conv;
	}
	return (dec);
}
