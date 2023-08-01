#include "lists.h"

/**
 * listint_len - for printing elements of linked-lists
 *
 * @h: pointer for printing node
 *
 * Return: node number
 */

size_t listint_len(const listint_t *h)
{
	size_t ax = 0;

	while (h)
	{
		ax++;
		h = h->next;
	}

	return (ax);
}
