#include "lists.h"

/**
 * insert_nodeint_at_index - it is for inserting new nodeto given list
 *
 * @head: pointer for pointing the node
 * @idx: index for inserting new node at first
 * @n: true value of new node
 *
 * Return: node pointer address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int axo;
	listint_t *new;
	listint_t *tt = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (axo = 0; tt && axo < idx; axo++)
	{
		if (axo == idx - 1)
		{
			new->next = tt->next;
			tt->next = new;
			return (new);
		}
		else
			tt = tt->next;
	}
	return (NULL);
}
