#include "lists.h"
/**
  * print_listint - function that prints all the elements of listint_t
  * @h: pointer to string
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
	{
		if (!h)
			return (0);

		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
