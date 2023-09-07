#include"main.h"
#include <stdlib.h>

/**
 * array_range - it is for creating integers array
 *
 * @min: intiate int
 * @max: maxmum int
 *
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int it, uj, *po;

	if (min > max)
		return (NULL);
	it = max - min + 1;
	po = malloc(sizeof(int) * it);
	if (!po)
		return (NULL);
	for (uj = 0; uj < it; uj++)
		po[uj] = min++;
	return (po);
}
