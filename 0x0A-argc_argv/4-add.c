#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string thre are digit
 * @str: array str
 *
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc)
{
	if (check_num(argv[count]))
	{
		str_to_int = atoi(argv[count]);
		sum += str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
}

printf("%d\n", sum);

return (0);
}
