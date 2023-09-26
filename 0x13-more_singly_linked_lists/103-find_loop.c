#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - these are for finding loop in linked-list
 *
 * @head: for searching for linked-list
 *
 * Return: node pointer when it starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ww = head;
	listint_t *f = head;

	if (!head)
		return (NULL);

	while (ww && f && f->next)
	{
		f = f->next->next;
		ww = ww->next;
		if (f == ww)
		{
			ww = head;
			while (ww != f)
			{
				ww = ww->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
