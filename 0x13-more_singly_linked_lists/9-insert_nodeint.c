#include "lists.h"
/**
  * insert_nodeint_at_index - function that inserts new node at given position
  * @head: pointer to pointer of list
  * @idx: index of new node
  * @n: data of node
  * Return: address of new node or NULL if fail
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 1; i < idx; i++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (temp)
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
