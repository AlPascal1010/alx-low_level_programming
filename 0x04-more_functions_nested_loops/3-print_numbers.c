#include <stdio.h>
#include "main.h"

/**
 * print_numvers - function that prints all the numbers from 0 to 9
 *
 * Return: returns nothing
 */
int print_numbers(void)
{
	for (int n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	
	_putchar(10);
}
