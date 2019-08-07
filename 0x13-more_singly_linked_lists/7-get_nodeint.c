#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the nth node in listint_t
  * @head: pointer to beginning of list
  * @index: index of node
  * Return: nth node or NULL if non-existent
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return (NULL);
	for (count = 0; head; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
