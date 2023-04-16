#include "main.h"

int sqrt(int num, int root);

/**
 * sqrt - the function that gets the sqaure root
 *
 * @num: the number under the square root
 * @root: the value of the square root
 * Return: the value of the square root
 */
int sqrt(int num, int root)
{
	if (root * root == num)
		return (num);
	else if (root == num / 2)
		return (-1);
	else
		return (sqrt(num, sqrt++));
}

/**
 * _sqrt_recursion - prints the square root of n
 *
 * @n: the number under the square root
 * Return: the square root value for n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (sqrt(n, root));
}
