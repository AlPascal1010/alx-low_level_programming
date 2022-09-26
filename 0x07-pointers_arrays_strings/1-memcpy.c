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
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destiny = dest;
	const unsigned char *source = src;

	for (i = 0, i < n; i++)
		destiny[i] = source[i];

	return (dest);
}
