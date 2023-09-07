#include"main.h"
#include <stdlib.h>

/**
 * _calloc - it is for allocating the array memory using malloc
 *
 * @nmemb: array numbers
 * @size: size of each element
 *
 * Return: pointer, or null when fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *alc;
	unsigned int ub;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	alc = malloc(nmemb * size);
	if (alc == NULL)
		return (NULL);
	for (ub = 0; ub < nmemb; ub++)
		alc[ub] = 0;
	return (alc);
}
