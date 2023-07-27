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
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
