#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first int
 * @b: second int
 *
 * Retrn: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_add - calculates the difference of two integers
 * @a: first int
 * @b: second int
 * Retrn: sum of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division of two integers
 * @a: first int
 * @b: second int
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the modulus of integers
 * @a: first int
 * @b: second int
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
