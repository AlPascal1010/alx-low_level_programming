#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A == 'e')
			continue;

		else if (A == 'q')
			continue;

		putchar (A);
	}

	putchar ('\n');

	return (0);
}
