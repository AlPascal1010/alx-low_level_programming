#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: if big-endian - 0,
 * if little_endian - 1
 */
int get_endianness(void)
{
	int nu = 1;
	char *end = (char *)&nu;

	if (*end == 1)
		return (1);

	return (0);
}
