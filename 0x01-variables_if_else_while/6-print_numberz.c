#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		fflush(stdout);
	}

	putchar('\n');

	return (0);

}
