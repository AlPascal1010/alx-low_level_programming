#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be factorized
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int nfactorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	nfactorial = factorial(n - 1);
	return (n * nfactorial);
}
