#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints the opcode in hexadecimal
 * format of the function main
 * @argc: number of arguments
 * @argv: values of the arguments
 * Return: 0 (success), 1 or 2 (fail)
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index != byte - 1)
		{
			printf(" ");
			address++;
		}
		else
			continue;
		printf("\n");
		return (0);
}
