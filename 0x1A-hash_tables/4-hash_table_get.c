#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *search;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	search = ht->array[index];

	while (search != NULL)
	{
		if (strcmp(key, search->key) == 0)
			return (search->value);
		search = search->next;
	}
	return (NULL);
}
