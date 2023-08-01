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

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		*head = node;
		node = node->next;
		free(node);
	}
	*head = NULL;
}
