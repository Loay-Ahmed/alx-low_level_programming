#include "main.h"
#include "stdio.h"

/**
 * malloc_checked - Checks if it can allocate
 * a specified memory
 *
 * @b: number of bytes to allocate
 * @ptr: pointer to the allocated memory
 * Return: 98 (fail to allocate), *ptr (success)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return (ptr);
	}
}
