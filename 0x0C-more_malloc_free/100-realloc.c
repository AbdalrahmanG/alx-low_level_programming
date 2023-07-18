#include"main.h"

/**
 * _realloc - re-allocate a memory block
 *
 * @ptr: pointer of previous memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory
 *
 * Return: NULL when new_size = 0, and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	c = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = c[i];
	free(ptr);
	return (p);
}
