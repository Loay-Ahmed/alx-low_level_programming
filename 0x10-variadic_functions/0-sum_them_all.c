#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: the sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = n, sum = 0;

	va_start(args, n);

	while (i--)
		sum += va_arg(args, int);

	return (sum);
}
