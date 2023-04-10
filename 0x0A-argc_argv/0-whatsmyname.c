#include "main.h"
#include "stdio.h"

/**
 * main - Function that prints the name of the file
 *
 * @argc: number of arguments passed
 * @argv: the values of the passed arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
