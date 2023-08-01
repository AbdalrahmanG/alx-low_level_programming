#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop -for finding loop in linked-list
 *
 * @head: for searching for linked-list
 *
 * Return: node pointer when it starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *f = head;

	if (!head)
		return (NULL);

	while (w && f && f->next)
	{
		f = f->next->next;
		w = w->next;
		if (f == w)
		{
			w = head;
			while (w != f)
			{
				w = w->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
