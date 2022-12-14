#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of
 * a listint_t list
 * @head: a pointer to the address of tge head of the listint_t
 * @n: the integer for the new node to contain
 *
 * Return: if the functions returns NULL
 * otherwise- the adress of tge new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
