#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	int comma = 0;
	unsigned long int index = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (comma != 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			comma = 1;
		}
		index++;
	}
	printf("}\n");
}
