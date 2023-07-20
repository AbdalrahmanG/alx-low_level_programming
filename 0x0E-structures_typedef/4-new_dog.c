#include"dog.h"
#include <stdlib.h>

/**
 * new_dog - for creating a new dog
 *
 * @name: string name
 * @age: int of dog age
 * @owner: dog owener
 *
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dg;
	int a, b, c;
	char *n, *m;

	dg = malloc(sizeof(struct dog));
	if (dg == NULL)
		return (NULL);
	for (a = 0; name[a] != '\0'; a++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;
	n = malloc(sizeof(char) * a + 1);
	if (n == NULL)
	{
		free(dg);
		return (NULL);
	}
	m = malloc(sizeof(char) * b + 1);
	if (m == NULL)
	{
		free(n);
		free(dg);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		n[c] = name[c];
	for (c = 0; c <= b; c++)
		m[c] = owner[c];

	dg->name = n;
	dg->age = age;
	dg->owner = o;

	return (dg);
}