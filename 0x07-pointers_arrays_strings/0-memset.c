/*
 * file: 0-memset
 * Auth: not
 */

#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: addtess to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
	}
	return (s);
}
