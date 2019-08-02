#include "lists.h"

/**
 * print_list - function that prints elements of a list
 * @h: pointer to str
 * Return: counter, num elements in  list
 */

size_t print_list(const list_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
