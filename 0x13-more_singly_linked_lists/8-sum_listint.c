#include "lists.h"

/**
 * sum_listint - for calculating sum of all data
 *
 * @head: pointer for pointing to node
 *
 * Return: sum result
 */

int sum_listint(listint_t *head)
{
	int sao = 0;

	while (head)
	{
		sao += head->n;
		head = head->next;
	}
	return (sao);
}
