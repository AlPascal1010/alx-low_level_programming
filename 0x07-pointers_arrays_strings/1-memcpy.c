#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory
 *    area pointed to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: tge source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 *
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
