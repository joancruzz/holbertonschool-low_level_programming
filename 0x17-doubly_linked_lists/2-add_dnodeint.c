#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of list
 * @head: pointer to pointer head
 * @n: data variable of new node
 * Return: New node values
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead = malloc(sizeof(dlistint_t));

	if (!newhead || !head)
		return (NULL);
	newhead->n = n;
	newhead->prev = NULL;
	if (!*head)
		*head = newhead;
	else
	{
		newhead->next = *head;
		(*head)->prev = newhead;
	}
	*head = newhead;
	return (newhead);
}
