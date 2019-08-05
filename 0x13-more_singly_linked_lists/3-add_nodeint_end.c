#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at the end of listint_t
 * @head: pointer to pointer
 * @n: integer
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == '\0')
	{
		*head = new;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}
