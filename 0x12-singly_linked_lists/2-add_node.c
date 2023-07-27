#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - for adding node in beginning of `list_t`
 *
 * @head: head double pointer
 * @str: string to be saved
 *
 * Return: the new element or, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int a;

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
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
