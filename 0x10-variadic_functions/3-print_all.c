#include "variadic_functions.h"

/**
 * print_all - prints all arguments of all data types
 * with a separator
 * @format: the data types of the arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j, c = 0;
	char *str, nformat[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (nformat[j])
		{
			if (format[i] == nformat[j] && c)
			{
			printf(", ");
			break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				str = va_arg(args, char *), c = 1;
				if (str)
				{
				printf("%s", str);
				break;
				}
				printf("(nil)");
				break;
		} i++;
	}
}
