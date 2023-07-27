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
	size_t i;

	i = 0;
	current = u;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->l, current->s);
		current = current->next;
		u++;
	}

	return (u);
}
