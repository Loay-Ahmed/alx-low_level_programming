#include "main.h"

/**
 * swap_int - swaps the values of two pointers a, b
 *
 * @a: first pointer to int
 * @b: second pointer to int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
