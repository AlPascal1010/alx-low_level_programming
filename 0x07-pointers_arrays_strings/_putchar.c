#include "main.h"
#include <unistd.h>

/**
 * _putchat - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * on error, -1 is returnex, and errno is setvappropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
