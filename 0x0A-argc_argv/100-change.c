#include "ctype.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * checknum - checks that all chars are digits
 *
 * @s: pointer to string
 * Return: 1 if all digit, 0 otherwise
 */
int checknum(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - adds numbers specified as arguments
 *
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int coins = 0, n;

	if (argc != 2 || !checknum(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		if (n >= 0)
		{
		coins += n / 25;
		n %= 25;
		coins += n / 10;
		n %= 10;
		coins += n / 5;
		n %= 5;
		coins += n / 2;
		n %= 2;
		coins += n;
		}
	}
	printf("%d\n", coins);
	return (0);
}
