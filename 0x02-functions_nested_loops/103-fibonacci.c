#include <stdio.h>

/**
 * main - prints the sum of even fibonacci under 4 million
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long i, n1 = 0, n2 = 1, n3, sum = 0;

	for (i = 0; i < 34; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0)
			sum += n3;
	}
	printf("%lu\n", sum);
	return (0);
}
