#include "lists.h"

/**
 * delete_nodeint_at_index - it is afunction for deleting node
 *
 * @head: pointer for pointing to node
 * @index: index deleted node
 *
 * Return: 1 when success, -1 when it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *node_p;
	unsigned int axo;

	axo = 0;
	node = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (axo != index)
	{
		node_p = node;
		node = node->next;
		if (node == NULL)
			return (-1);
		axo++;
	}
	node_p->next = node->next;
	free(node);
	return (1);
}
