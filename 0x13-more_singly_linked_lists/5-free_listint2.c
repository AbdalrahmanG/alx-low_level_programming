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
	listint_t *friend;

	if (head != NULL)
	{
		node = *head
		while (*head != NULL)
		{
			temp = node;
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
