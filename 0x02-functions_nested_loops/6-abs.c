#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the that will uwe for the argument of the function
 * Return: Always 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
