#include "main.h"

/**
 * _pow_recursion - prints x to the power of y
 *
 * @x: the number
 * @y: the power
 * Return: the value of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
