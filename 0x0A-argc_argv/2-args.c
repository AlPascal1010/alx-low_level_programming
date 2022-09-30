#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: count argument
 * @argv: Arguments
 *
 * Retun: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
