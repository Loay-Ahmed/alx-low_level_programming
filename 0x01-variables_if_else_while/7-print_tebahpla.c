#include <stdio.h>

/**
 *main - entry point of program
 *
 *Return: return 0
 */
int main(void)
{
	int i = 25;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
		putchar(alpha[i]);

	putchar('\n');
	return (0);
}
