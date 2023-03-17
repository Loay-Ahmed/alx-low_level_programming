#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - entry point of programs
 *
 *Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char str[16];

	sprintf(str, "%d", n);
	if (n < 0)
	{
	if (n > 5)
	{printf("Last digit of %d is -%c and is greater than 5\n",
			n, str[strlen(str) - 1]); }
	else if (n == 0)
	{printf("Last digit of %d is -%c and is 0\n", n, str[strlen(str) - 1]); }
	else
	{
printf("Last digit of %d is -%c and is less than 6 and not 0\n",
		n, str[strlen(str) - 1]); }
	}
	else
	{
	if (n > 5)
	{printf("Last digit of %d is %c and is greater than 5\n",
			n, str[strlen(str) - 1]); }
	else if (n == 0)
	{printf("Last digit of %d is %c and is 0\n", n, str[strlen(str) - 1]); }
	else
	{
printf("Last digit of %d is %c and is less than 6 and not 0\n",
		n, str[strlen(str) - 1]); }
	}
	return (0);
}
