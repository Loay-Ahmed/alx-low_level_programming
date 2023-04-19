#include "3-calc.h"

/**
 * op_add - adds a and b
 *
 * @a: first operand
 * @b: second operand
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first operand
 * @b: second operand
 * Return: the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first operand
 * @b: second operand
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividess a and b
 * @a: first operand
 * @b: second operand
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder a / b
 * @a: first operand
 * @b: second operand
 * Return: the remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
