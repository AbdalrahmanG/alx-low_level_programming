#include "lists.h"

/**
 * free_listint2 - function freeing list of int
 *
 * @head: pointer pointing to address of node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *te

	if (!head)
		return;
	*head = node;
	while (node)
	{
		te = node;
		node = node->next;
		free(te);
	}
	*head = NULL;
}
