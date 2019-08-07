#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to pointer of list
 * Return: data of head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp_n = 0;

	if (!head  || !(*head))
		return (0);

	temp = (*head)->next;
	temp_n = (*head)->n;
	free(*head);
	*head = temp;
	return (temp_n);
}
