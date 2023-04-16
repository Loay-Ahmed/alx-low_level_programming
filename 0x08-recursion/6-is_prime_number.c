#include "main.h"

/**
 * is_prime_number - checks for prime number
 *
 * @n: the number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int num = n / 2;

	if (num == 1 || n <= 1)
		return (0);
	else if (!(n % num))
		return (1);

	return (is_prime_number(--num));
}
