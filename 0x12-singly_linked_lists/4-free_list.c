#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: header pointer
 * Return: no return
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
