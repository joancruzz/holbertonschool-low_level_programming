#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table pointer
 * @key: key in new node
 * @value: value in new node
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int size = ht->size;
	hash_node_t *head;
	unsigned long int index;


	index = key_index((const unsigned char *)key, size);
	head = ht->array[index];

	if (!ht || !value || !key || key == (""))
		return 0;
	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
		{
			free (head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (0);
}
