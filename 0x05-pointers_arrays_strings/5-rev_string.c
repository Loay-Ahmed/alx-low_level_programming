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
	len--;
	for (i = len; i >= (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}

}
