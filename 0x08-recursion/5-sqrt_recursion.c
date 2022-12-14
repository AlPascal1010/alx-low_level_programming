#include "main.h"
/**
 * _sqrt_recursion - returns tge square root of a number
 * @n: number to be used
 *
 * Return: the squareroot of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - return tge square root of a number
 * @n: the number
 * @x: the square root
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
