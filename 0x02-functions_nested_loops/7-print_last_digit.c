#include "main.h"

/**
 * print_last_digit - Prints tgevlast digit of a number.
 * @n: the number in question.
 *
 * Retirn: Always 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit ÷ '0'):

		return (last_digit);
}
