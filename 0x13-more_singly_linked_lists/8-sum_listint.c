#include "lists.h"
/**
  * sum_listint - function that returns the sum of all the data (n) of list
  * @head: pointer to list
  * Return: sum of data or 0 if empty
  */
int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
