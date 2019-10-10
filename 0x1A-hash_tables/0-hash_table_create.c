#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		return (NULL);
		free(ht);
	}

	array = calloc(size, sizeof(hash_node_t **));
	if (!array)
	{
		return (NULL);
		free(array);
	}
	ht->size = size;
	ht->array = array;
	return (ht);
}
