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
	void *i;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		i = malloc(new_size);
		if (i == NULL)
			return (NULL);
		return (i);
	}
	if (new_size > old_size)
	{
		i = malloc(new_size);
		if (i == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)i + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (i);
}
