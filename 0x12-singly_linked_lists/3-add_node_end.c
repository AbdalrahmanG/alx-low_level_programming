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
	list_t *current;
	list_t *new_node;
	int a;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;
	for (a = 0; dup_str[a] != '\0'; a++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = a;
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
