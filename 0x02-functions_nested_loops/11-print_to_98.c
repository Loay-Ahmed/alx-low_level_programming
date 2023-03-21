#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: starting point for the natural numbers
 */
void print_to_98(int n)
{
	int i;
	if (n < 99)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
