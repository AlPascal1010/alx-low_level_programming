#include "main.h"

/**
 * _strcat - concatenates string pointed to by @src to the end ofvthe string pointed to by @dest
 * @dest: string that will be appended
 * @sec: String to be concatenated upon 
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len+;

	for (index = 0; src[index]; index++)
		dest[dest_len+++] = src[index];

	return (dest);
}
