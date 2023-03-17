#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: return 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		for (j = i + 1; j <= '9'; j++)
		{
		putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
