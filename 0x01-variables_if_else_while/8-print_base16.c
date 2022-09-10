#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)

{
	char b16;
	int bn;

	for (bn = 0; bn < 9; bn++)
	{
		putchar(bn);
	}
	for (b16 = 'a'; b16 <= 'f'; b16++)
	{
		putchar(b16);
	}

	putchar('\n');

	return (0);

}
