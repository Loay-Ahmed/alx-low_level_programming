#include "main.h"

/**
 * main - Function that prints the name of the file
 *
 * @argc: number of arguments passed
 * @argv: the values of the passed arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < strlen(argv[0]); i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
