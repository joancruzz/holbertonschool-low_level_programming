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
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * @list: linked list to be sorted
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *sorted;
	listint_t *temp;

	if (!list || !*list || !(*list)->next)
		return;

	temp = *list;
	while (temp && temp->next)
	{
		if (temp->n > temp->next->n)
		{
			swap_nodes(temp, temp->next, list);
			sorted = temp;
			temp = temp->prev;
			while (temp && temp->prev)
			{
				current = temp;
				if (current->n < current->prev->n)
					swap_nodes(current->prev, current, list);
				else
					break;
			}
			temp = sorted;
		}
		else
			temp = temp->next;
	}
}
