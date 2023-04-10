#include "stdio.h"
#include "main.h"

/**
 * main - prints the product of two integers
 *
 * @argc: number of arguments
 * @argv: arguments values
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
