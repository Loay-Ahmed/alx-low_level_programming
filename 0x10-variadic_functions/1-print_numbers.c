#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers separated by
 * the separator with a newline in the end
 * @separator: the number separator
 * @n: number of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n - 1;

	va_start(args, n);

	while (i--)
		printf("%d%s", va_arg(args, int), separator ? separator : "");

	printf("%d\n", va_arg(args, int));
}
