#include "lists.h"
/**
 * reverse_listint - function reverse list
 * @head: pointer to pointer of list
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = 0, *next;

	if (!*head)
		return (0);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (!next)
			break;
		*head = next;
	}
	return (*head);
}
