#include <stdio.h>
#include "main.h"

/**
 * print_numvers - function that prints all the numbers from 0 to 9
 *
 * Return: Always 0
 */

int print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');
}
