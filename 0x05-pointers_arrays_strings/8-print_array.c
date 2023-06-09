#include "main.h"
#include <stdio.h>

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

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);

		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}
