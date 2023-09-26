#include "lists.h"

/**
 * listint_len - is is for printing elements of linked-lists
 *
 * @h: pointer for printing node
 *
 * Return: node number
 */

size_t listint_len(const listint_t *h)
{
	size_t axo = 0;

	while (h)
	{
		axo++;
		h = h->next;
	}

	return (axo);
}
