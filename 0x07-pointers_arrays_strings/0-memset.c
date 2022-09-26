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

void *_memset(void *s, int b, size_tt n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
