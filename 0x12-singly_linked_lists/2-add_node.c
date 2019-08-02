#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer of pointer h
 * @str: string
 * Return: NULL if fail or address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc (sizeof(list_t));
	if (!newhead)
		return (NULL);

	newhead->str = strdup(str);
	newhead->len = _sterlen(str);
	newhead->next = *head;
	*head = newhead;
	return (*head);
}

/**
  * _sterlen - return size of string
  * @s: pointer of string
  * Return: length of string
  */
int _sterlen (const char *s)
{
	unsigned int count;

	for (count = 0; s[count]; count++)
		;
	return(count);
}
