#include "lists.h"

/**
 * add_nodeint - is si function for adding node to top
 *
 * @head:  pointer to NULL of the first node
 * @n: the true valuse of node
 *
 * Return: the node pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeo;

	new_nodeo = malloc(sizeof(listint_t));
	if (new_nodeo == NULL)
		return (NULL);
	new_nodeo->n = n;

	if (*head)
		new_nodeo->next = *head;
	*head = new_nodeo;
	return (new_nodeo);
}
