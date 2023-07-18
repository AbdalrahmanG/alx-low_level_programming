#include"main.h"
#include <stdlib.h>

/**
 * array_range - create integers array
 *
 * @min: intiate int
 * @max: maxmum int
 *
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int i, j, *p;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	p = malloc(sizeof(int) * i);
	if (!p)
		return (NULL);
	for (j = 0; j < i; j++)
		p[j] = min++;
	return (p);
}
