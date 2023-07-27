#include "lists.h"
#include <stdio.h>

/**
 * free_list - free the `list_t`
 * @head: linked-list head
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;
	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
