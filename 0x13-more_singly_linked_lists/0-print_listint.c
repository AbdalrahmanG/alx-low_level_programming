#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function for  printing linked-lists
 *
 * @h: pointer for printing node
 *
 * Return: node number
 */

size_t print_listint(const listint_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
