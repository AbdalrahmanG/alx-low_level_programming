#include "main.h"
#include <stdlib.h>

/**
 * create_array - for creating array of char
 *
 * @size: array size
 * @c: char
 *
 * Return: array pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;
	return (i);
}
