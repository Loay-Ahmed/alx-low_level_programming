#include "main.h"

/**
 * times_table - prints the times table from 0 to 9
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n >=0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j < 10)
				{

					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((i * j) + '0');
				}
				else if (i * j < 100)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
