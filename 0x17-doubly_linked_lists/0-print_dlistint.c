#include "list.h"

/**
 * print_dlistint - prints the element of a dlist
 * @h: head of the list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next
	}

	return (count)
