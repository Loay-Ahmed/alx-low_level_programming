#include "main.h"

/**
 * print_array - prints a specific n  elements of an array
 *
 * @n: number of elements
 * @a: pointer to the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);

	printf("%d", s[i + 1]);
}
