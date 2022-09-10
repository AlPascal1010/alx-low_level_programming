#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	
	putchar('\n');

	return (0);
}
