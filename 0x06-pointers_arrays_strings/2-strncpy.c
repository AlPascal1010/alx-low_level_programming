#inclide "main.h"
/**
 * _strncpy - c fundtion that copies a sting, including the terminating null byte, using at most an inputted number of byte. if the length of the source is less than the maximum byte number the remainder of the destination string is filled with null bytes. works identically to the standard library function 'strncpy'.
 * @dest: buffer stoing the sting copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
