#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string yo check against
 *
 * Return: pointer to byte in s tgat matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[j]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			break;
		}
		if (accept[j])
			return (s + i);
	}
	return (s + i);
}
