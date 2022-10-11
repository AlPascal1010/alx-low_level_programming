#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a stuct dog
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NYLL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner; (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
