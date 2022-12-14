#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (_is_prime(n, start));
}

/**
 * _is_prime - returns the 1 is n is a prime number
 * @n: number to check
 * @start: number to start checking from
 *
 * Return: 1 if n is a prime, 0 otherwise
 */
int _is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (1);
	return (_is_prime(n, start - 1));
}
