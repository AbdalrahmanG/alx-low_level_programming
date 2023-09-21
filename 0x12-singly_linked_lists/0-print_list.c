#include "lists.h"
#include <stdio.h>

/**
 * print_list - for printing every elements of `list_t` in hgere
 *
 * @h: linked head
 *
 * Return: nodes number
 */

size_t print_list(const list_t *h)
{
	size_t ao = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		ao++;
	}

	return (ao);
}
