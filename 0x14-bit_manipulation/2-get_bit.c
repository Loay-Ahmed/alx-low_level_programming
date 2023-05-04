#include "main.h"

/**
 * get_bit - gets the bit at the index specified
 * from the binary of the number specified
 *
 * @n: the number with the binary
 * @index: the index of the bit in n
 * Return: the bit (success), -1 (fail)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		if (n == 0)
			return (0);
		return (n | (1<<index));
	}
	return (-1);
}
