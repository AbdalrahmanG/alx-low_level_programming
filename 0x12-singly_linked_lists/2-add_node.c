#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - for adding a node in the beginning of `list_t` here
 *
 * @head: head double pointer
 * @str: string to be saved
 *
 * Return: the new element or, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newo;
	unsigned int leon = 0;

	while (str[leon])
		leon++;
	newo = malloc(sizeof(list_t));
	if (!newo)
		return (NULL);

	newo->str = strdup(str);
	newo->len = leon;
	newo->next = (*head);
	(*head) = newo;

	return (*head);
}
