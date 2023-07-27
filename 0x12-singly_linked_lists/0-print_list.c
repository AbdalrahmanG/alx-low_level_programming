#include "lists.h"
#include <stdio.h>

/**
 * print_list - for printing every elements of `list_t`
 *
 * @h: linked head
 *
 * Return: nodes number
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t s;

	s = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		s++;
	}

	return (s);
}
