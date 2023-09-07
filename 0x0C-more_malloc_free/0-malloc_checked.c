#include"main.h"
#include <stdlib.h>

/**
 * malloc_checked - for allocating the memory or exit when fail.
 *
 * @b: int
 *
 * Return: array pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *ie = malloc(b);

	if (ie == 0)
		exit(98);
	return (ie);
}
