#include "main.h"
#include "stdio.h"

/**
 * _atoi - converts the first portion of a string
 * into integer
 *
 * @s: pointer to a string
 * Return: 0 if there is no number,
 * otherwise the number in the string
 */
int _atoi(char *s)
{
	int negative = 1, end = 0, num = 0;

	if (*s < 48 || *s > 57)
		return (-1);

	while (*s)
	{
		if (*s == '-')
			negative *= -1;
		while (*s >= 48 && *s <= 57)
		{
			end = 1;
			num = num * 10 + (*s - '0');
			s++;
		}
		if (end == 1)
			break;
		s++;
	}
	return (num * negative);
}

/**
 * main - prints the product of two integers
 *
 * @argc: number of arguments
 * @argv: arguments values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = _atoi(argv[i]);
			if (n == -1)
			{
				printf("Error\n");
				return (1);
			}
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
