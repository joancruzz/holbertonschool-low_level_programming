#include "lists.h"

/**
  * dlistint_len - function that returns number of elements in linked list
  * @h: pointer to head of node
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
