#include "function_pointers.h"

/**
 * int_index - gets the index of
 * the return of other functions
 *
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: index of the return of other functions
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
