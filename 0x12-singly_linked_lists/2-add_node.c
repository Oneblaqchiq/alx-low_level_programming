#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - returns length 
 * @s: character of string
 * Return: length of string
*/

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
