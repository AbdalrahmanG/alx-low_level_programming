#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - they are for countinge numbers nodes
 *
 * @head: pointer for pointing head
 *
 * Return: when no loop 0, otherwise node number
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *hr;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	hr = (head->next)->next;
	while (hr)
	{
		if (tor == hr)
		{
			tor = head;
			while (tor != hr)
			{
				node++;
				tor = tor->next;
				hr = hr->next;
			}
			tor = tor->next;
			while (tor != hr)
			{
				node++;
				tor = tor->next;
			}
			return (node);
		}

		tor = tor->next;
		hr = (hr->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - for printing listint_t as list
 *
 * @head: pointer for pointing to head
 *
 * Return: node num in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
