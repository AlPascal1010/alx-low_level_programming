#include <unistd.h>

/**
 * _putchar - Wriete thje character c to stdout
 * @c; Character to print
 *
 * ReturnL on success 1,
 * On error, -1 is returned. and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1))l
}
