#include "variadic_functions.h"

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
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), *separator ? separator : "");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
}
