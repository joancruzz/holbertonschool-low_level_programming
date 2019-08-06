#include "lists.h"
/**
  * free_listint2 - function that frees listint_t
  * @head: pointer to data
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
