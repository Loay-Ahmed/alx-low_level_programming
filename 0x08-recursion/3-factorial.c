#include "main.h"

/**
 * factorial - function that gets the factorial of n
 *
 * @n: the number to get its factorial
 * Return: value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
