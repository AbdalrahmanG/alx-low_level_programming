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
	char *p1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!p1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = old_ptr[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = old_ptr[a];
	}
	free(ptr);
	return (p1);
}

