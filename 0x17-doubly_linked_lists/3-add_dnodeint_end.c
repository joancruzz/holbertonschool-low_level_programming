#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the end of list
 * @head: pointer to pointer to head
 * @n: data variable of new node
 * Return: address of new element or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newhead = malloc(sizeof(dlistint_t));
	dlistint_t *lastnode = *head;

	if (!newhead || !head)
		return (NULL);
	newhead->n = n;
	newhead->next = NULL;

	if (*head == NULL)
	{
		newhead->prev = NULL;
		*head = newhead;
		return (newhead);
	}
	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newhead;
	newhead->prev = lastnode;
	return (newhead);
}
