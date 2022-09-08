#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long li;;
	long long lli;
	float f;

	printf("size of a char: %li byte(s)\n", sizeof(c));
	printf("size of an int; %li bytes(s)\n", sizeof(i));
	printf("size of a long int; %li bytes(s)\n", sizeof(li));
	printf("size of a long long int; %li bytes(s)\n", sizeof(lli));
	printf("size of a float: %li byte(s)\n", sizeof(f));
	return (0);
}
