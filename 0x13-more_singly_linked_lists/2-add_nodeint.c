#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of listint_t
 * @head: pointer to pointer
 * @n: integer
 * Return: new address of element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
