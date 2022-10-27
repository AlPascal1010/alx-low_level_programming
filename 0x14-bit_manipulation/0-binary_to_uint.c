#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j, base2;
	unsigned int deci = 0;

	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
		;

	for (j--, base2 = 1; j >= 0; j--, base2 *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] & 1)
		{
			deci += base2;
		}
	}
	return (deci);
}
