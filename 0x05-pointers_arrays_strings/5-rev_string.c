#include "main.h"

/**
 * rev_string - reverses the a string pointed to by s
 *
 * @s: pointer to a string
 * Returns: nothing
 */

void rev_string(char *s)
{
	int len = 0, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len / 2; i++, len--)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}

}
