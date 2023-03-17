#include <stdio.h>

/**
 *main - entry point of program
 *
 *Return: return 0
 */
int main(void)
{
	int i = 0;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
		putchar(alpha[i]);

	for (i = 0; i < 26; i++)
		putchar(alpha[i] - 32);

	putchar('\n');
	return (0);
}
