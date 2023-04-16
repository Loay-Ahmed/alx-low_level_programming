#include "main.h"

/**
 * factorial - function that gets the factorial of n
 *
 * @n: the number to get its factorial
 * Retrun: value of the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (factorial(n));
}
