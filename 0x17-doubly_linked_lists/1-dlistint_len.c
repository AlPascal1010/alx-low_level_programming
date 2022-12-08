#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlist
 * @h: pointer to the list
 * Return: number of nides
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
