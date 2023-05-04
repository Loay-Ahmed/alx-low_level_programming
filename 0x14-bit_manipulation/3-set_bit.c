#include "main.h"

/**
 * set_bit - sets a bit at an index to 1
 * for a number
 *
 * @n: pointer to the number
 * @index: the index which will change
 * Return: 1 (success), -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		n = n | (1 << index);
		return (1);
	}
	return (-1);
}
