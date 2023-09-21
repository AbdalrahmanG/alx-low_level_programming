#include "lists.h"
#include <stdio.h>

/**
 * list_len - for returning the elements number in a linked `list_t` in here.
 *
 * @h: linked list head
 *
 * Return: elements number found in list
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t io;

	io = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		io++;
	}
	return (io);
}
