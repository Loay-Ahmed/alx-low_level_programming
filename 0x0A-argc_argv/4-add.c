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
	int i, sum = 0, n;

	for (i = 1; i < argc; i++)
	{
		if (checknum(argv[i]))
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
