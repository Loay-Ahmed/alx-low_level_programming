#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by
 * the separator with a newline in the end
 * @separator: the string separator
 * @n: number of arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
