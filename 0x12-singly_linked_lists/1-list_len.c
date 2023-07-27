#include "lists.h"
#include <stdio.h>

/**
 * list_len - for returning the elements number in a linked `list_t`
 *
 * @h: linked list head
 *
 * Return: elements number found in list
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t i;

	i = 0;
	current = u;
	while (current != NULL)
	{
		current = current->next;
		u++;
	}

	return (u);
}
