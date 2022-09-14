#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98, in order seperated by a comma followed byba space.
 * @n: The number to begin counting from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 0)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
