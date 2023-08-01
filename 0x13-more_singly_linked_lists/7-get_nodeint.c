#include "lists.h"

/**
 * get_nodeint_at_index - function for returing node to index
 *
 * @head: pointer for pointing address node
 * @index: for indexing node starting with 0
 *
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ax;

	ax = 0;
	while (head != NULL)
	{
		if (ax == index)
			return (head);
		ax++;
		head = head->next;
	}
	return (head);
}
