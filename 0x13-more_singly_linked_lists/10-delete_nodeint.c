#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes node at index of
 * @head: pointer to pointer of list
 * @index: index of node
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *delete;

	if (!head || !(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = temp;
		*head = temp->next;
	}
	else
		delete = temp->next;

	temp->next = delete->next;

	free(delete);

	return (1);
}
