#include <stdio.h>

/**
 *main - entry point of program
 *
 *Return: return 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
		putchar(alpha[26]);

	putchar('\n');
	return (0);
}
