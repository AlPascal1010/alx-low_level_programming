#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: is tge int we will use for the arg of the function
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

