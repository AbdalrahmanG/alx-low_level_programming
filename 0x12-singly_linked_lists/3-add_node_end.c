#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - for adding node at end of `list_t`
 *
 * @head: head double pointer
 * @str: string to be duplicated in node
 *
 * Return: new element or, NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int leon = 0;

	while (str[leon])
		leon++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = leon;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
