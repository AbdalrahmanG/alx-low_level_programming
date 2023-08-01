#include "lists.h"

/**
 * pop_listint - function for deleting head node of list
 *
 * @head: pointer for taking address of node
 *
 * Return: The true value of node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int ax;

	if (*head == NULL)
		return (0);

	node = (*head)->next;
	if (*head != NULL)
	{
		node = *head;
		ax = (*head)->n;
		free(*head);
	}
	return (ax);
}
