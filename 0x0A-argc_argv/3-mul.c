#include "stdio.h"
#include "main.h"

/**
 * main - prints the product of two integers
 *
 * @argc: number of arguments
 * @argv: arguments values
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
	printf("Error");
	return (1);
}
