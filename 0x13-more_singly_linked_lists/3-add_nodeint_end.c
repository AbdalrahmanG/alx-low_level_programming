#include "lists.h"

/**
 * add_nodeint_end - it is a function for adding node to the bottom
 *
 * @head: pointer pointing to the node
 * @n: the printing number value for node
 *
 * Return: new pointer node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeo;
	listint_t *curr_p;

	new_nodeo = malloc(sizeof(listint_t));
	curr_p = *head;
	if (new_nodeo == NULL)
		return (NULL);

	new_nodeo->n = n;
	new_nodeo->next = NULL;

	while (curr_p && curr_p->next != NULL)
		curr_p = curr_p->next;
	if (curr_p != NULL)
		curr_p->next = new_nodeo;
	else
		*head = new_nodeo;
	return (new_nodeo);
}
