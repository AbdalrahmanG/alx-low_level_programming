#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the `list_t` in here
 *
 * @head: linked-list head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
