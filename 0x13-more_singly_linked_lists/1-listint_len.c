#include "lists.h"
/**
  * listint_len - function that returns the number of elements in listint_t
  * @h: pointer to string
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
