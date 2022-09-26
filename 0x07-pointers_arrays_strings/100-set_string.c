#include "main.h"

/**
 * ser_string - set the value of a pointer to a char
 * @s: pointe to change
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
