#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->len = _strlen(str);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}

/**
 * _strlen - finds length of string
 * @s: character of strin
 * Return: length of string
*/

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
