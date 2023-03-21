#include <stdio.h>

/**
 * main - prints the first 50 fibonacci
 *
 * Return: nothing
 */
void main(void)
{
	unsigned long i, n1 = 0, n2 = 1, n3;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		if (i != 49)
			printf(", ");
	}
	printf('\n');
}
