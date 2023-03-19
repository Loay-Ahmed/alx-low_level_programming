#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: return 0
 */
int main(void)
{
	int i, j, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (n = j + 1; n <= '9'; n++)
			{
				putchar(i);
				putchar(j);
				putchar(n);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
