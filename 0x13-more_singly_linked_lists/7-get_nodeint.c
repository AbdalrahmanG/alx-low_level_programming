#include "lists.h"

/**
 * get_nodeint_at_index - it is function for returing node to index
 *
 * @head: pointer for pointing address node
 * @index: for indexing node starting with 0
 *
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int axo;

	axo = 0;
	while (head != NULL)
	{
		if (axo == index)
			return (head);
		axo++;
		head = head->next;
	}
	return (head);
}
