#include "sort.h"

/**
 * swap_nodes - function that swaps two nodes in a linked list
 * @left_node: left side node
 * @right_node: right side node
 * @list: linked list to be sorted
 * Return: Void
 */
void swap_nodes(listint_t *left_node, listint_t *right_node, listint_t **list)
{
        listint_t *prev_node, *next_node;

        prev_node = left_node->prev;
        next_node = right_node->next;
        if (prev_node)
                prev_node->next = right_node;
        else
                *list = right_node;
        if (next_node)
                next_node->prev = left_node;
        right_node->prev = prev_node;
        left_node->next = next_node;
        right_node->next = left_node;
        left_node->prev = right_node;
        print_list(*list);
}

/**
 * cocktail_sort_list - a function that sorts a doubly linked list of integers
 * in ascending order using the Cocktail shaker sort algorithm
 * @list: A linked list to be sorted
 * Return: Void
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;
	listint_t *pointer = NULL;

	if (!list || !*list)
		return;

	pointer = *list;

	while (swapped)
	{
		swapped = 0;
		while (pointer && pointer->next)
		{
			if (pointer->n > pointer->next->n)
			{
				swap_nodes(pointer, pointer->next, list);
				swapped = 1;
				if (pointer->next)
					continue;
			}
			if (pointer->next == NULL)
				break;
			pointer = pointer->next;
		}
		if (!swapped)
			break;
		while (pointer && pointer->prev)
		{
			if (pointer->n < pointer->prev->n)
			{
				swap_nodes(pointer->prev, pointer, list);
				swapped = 1;
				if (pointer->prev)
					continue;
			}
			if (pointer->prev == NULL)
				break;
			pointer = pointer->prev;
		}
	}
}
