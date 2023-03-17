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
	{
		if (alpha[i] == 'q' || alpha[i] == 'e')
			continue;
		else
			putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
