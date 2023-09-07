#include"main.h"
#include <stdlib.h>

/**
 * _realloc - it is for re-allocating a memory block
 *
 * @ptr: pointer of previous memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory
 *
 * Return: NULL when new_size = 0, and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *po1;
	char *old_ptr;
	unsigned int ao;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	po1 = malloc(new_size);
	if (!po1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (ao = 0; ao < new_size; ao++)
			po1[ao] = old_ptr[ao];
	}
	if (new_size > old_size)
	{
		for (ao = 0; ao < old_size; ao++)
			po1[ao] = old_ptr[ao];
	}
	free(ptr);
	return (po1);
}
