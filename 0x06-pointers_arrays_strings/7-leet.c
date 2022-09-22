#include "main.h"

/**
 * leet - leet encoder
 * @str: string to be encoded
 *
 * Return: return of the encoded string
 */

char *leet(char *str)
{
	int i, j;

	char a[] = "aAeEoOtTiL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
