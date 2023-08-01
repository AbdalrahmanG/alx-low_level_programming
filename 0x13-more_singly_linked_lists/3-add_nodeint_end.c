#include "lists.h"

/**
 * add_nodeint_end - function for adding node to the bottom
 *
 * @head: pointer pointing to the node
 * @n: the printing number value for node
 *
 * Return: new pointer node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr_p;

	new_node = malloc(sizeof(listint_t));
	curr_p = *head;
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (curr_p && curr_p->next != NULL)
		curr_p = curr_p->next;
	if (curr_p != NULL)
		curr_p->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
