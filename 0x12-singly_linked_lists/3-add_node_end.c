#include "lists.h"

/**
 * add_node_end - function that adds node at end of list
 * @head: pointer to pointer h
 * @str: string
 * Return: NULL if fail or address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _sterlen(str);
	newnode->next = NULL;
	if (*head == '\0')
	{
		*head = newnode;
		return (*head);
	}
	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	return (newnode);
}

#include "lists.h"
/**
 * _sterlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */
int _sterlen(const char *s)
{
	unsigned int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		;
	}
	return (count);
}
