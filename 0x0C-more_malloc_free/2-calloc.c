#include"main.h"
#include <stdlib.h>

/**
 * _calloc - allocate array memory using malloc
 *
 * @nmemb: array numbers
 * @size: size of each element
 *
 * Return: pointer, or null when fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int b;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < nmemb; b++)
		a[b] = 0;
	return (a);
}
