#include "function_pointers.h"

/**
 * print_name - prints name of the user
 *
 * @name: user's name
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
