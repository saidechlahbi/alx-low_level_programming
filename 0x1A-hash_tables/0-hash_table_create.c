#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size in number of nodes
 *
 * Return: a pointer tio the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
		ht->array[i] = NULL;
	return (ht);
}
