#include"main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory or exit when fail
 *
 * @b: int
 *
 * Return: array pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);
	return (i);
}
