#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument
 *
 * Return: Always 0
 */
int main(int argv, char *argv[])
{
	(void) argv;
	printf("%l\n", argc - 1);
	return (0);
}
