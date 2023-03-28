#include "main.h"

/**
 * _atoi - converts the first portion of a string
 * into integer
 *
 * @s: pointer to a string
 * Return: 0 if there is no number,
 * otherwise the number in the string
 */
int _atoi(char *s)
{
	int i, negative = 1, end = 0, num = 0;

	while (*s)
	{
		if (*s == '-')
			negative *= -1;
		while (*s >= 48 && *s <= 57)
		{
			end = 1;
			num = num * 10 + (*s - '0');
			s++;
		}
		if (end == 1)
			break;
		s++;

}
