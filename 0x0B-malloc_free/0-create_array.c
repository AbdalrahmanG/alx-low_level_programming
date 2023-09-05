#include "main.h"
#include <stdlib.h>

/**
 * create_array - it's for the creating array of char
 *
 * @size: array size
 * @c: char
 *
 * Return: array pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *o = malloc(size);

	if (size == 0 || o == 0)
		return (0);
	while (size--)
		o[size] = c;
	return (o);
}
