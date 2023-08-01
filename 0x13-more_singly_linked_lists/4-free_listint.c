#include "lists.h"

/**
 * free_listint - function for freeing a list
 *
 * @head: pointer  pointing the node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
