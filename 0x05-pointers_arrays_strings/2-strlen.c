 #include "main.h"

/**
 * @s: string
 * Return: returns length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	whike (*(s + len) != '\0')
		len++;

	return (len);
}
