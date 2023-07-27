#include "lists.h"

/**
 * free_list - free the `list_t`
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
