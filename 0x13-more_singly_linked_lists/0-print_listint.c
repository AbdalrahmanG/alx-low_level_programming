#include "lists.h"
#include <stdio.h>

/**
 * print_listint - it is a function for printing linked-lists
 *
 * @h: pointer for printing node
 *
 * Return: node number
 */

size_t print_listint(const listint_t *h)
{
	int ao;

	ao = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		ao++;
		h = h->next;
	}
	return (ao);
}
