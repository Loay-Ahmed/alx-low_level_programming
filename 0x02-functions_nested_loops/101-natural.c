#include <stdio.h>

/**
 * main - prints numbers divisble by 3 or 5
 *
 * Return: nothing
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 or i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n");
}
