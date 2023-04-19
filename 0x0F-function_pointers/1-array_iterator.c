#include "function_pointers.h"

/**
 * array_iterator - function that executes
 * another function
 *
 * @array: pointer to array
 * @size: the size of the array pointed to
 * @action: pointer the function executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
