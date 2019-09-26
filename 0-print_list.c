#include "lists.h"

/**
 * print-list - function that prints elements in a list
 * @h: first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h ->next;
		}
	}
	return (count);
}
