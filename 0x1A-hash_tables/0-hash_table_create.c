#include "hash_tables.h"

/**
 * hash_tables_create - Creates a hash taable.
 * @size: The size of the array
 *
 * Return: I an error occur - NULL
 * otherwise -va pointer to the new hash table.
 */
hash_tables_t *hash_tables_create(unsigned long int size)
{
	hash_tables_t *ht;
	unsigned long int i;

	ht = malloc(sieof(hash_table_t));
	if (ht ==NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for  (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}