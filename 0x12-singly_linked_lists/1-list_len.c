#include "lists.h"

/**
  * list_len - function that returns the number of elements in a linked  list
  * @h: pointer to str
  * Return: number of elements in str
  */

size_t list_len(const list_t *h)
{
	unsigned int count;

	for (count = 0; h != '\0'; count++)
		h = h->next;
	return (count);
}
