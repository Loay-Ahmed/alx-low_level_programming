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
	int i = n - 1;

	va_start(args, n);

	while (i--)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%d\n", va_arg(args, int));
	va_end(args);
}
