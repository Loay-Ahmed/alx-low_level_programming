#include <stdio.h>

/**
 * main - entry poin of program
 *
 * Return: return 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
