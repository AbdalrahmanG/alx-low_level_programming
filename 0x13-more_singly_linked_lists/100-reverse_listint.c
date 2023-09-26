#include "lists.h"

/**
 * reverse_listint - it is for reversing an int list
 *
 * @head: pointer for pointing node
 *
 * Return: node pointer of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_p = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = node_p;
		node_p = *head;
		*head = next;
	}
	*head = node_p;
	return (*head);
}
