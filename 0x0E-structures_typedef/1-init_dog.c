#include"dog.h"
#include <stdlib.h>

/**
 * init_dog - dog initialize
 *
 * @d: intialiaze of dog
 * @name: dogs name
 * @age: int of dogs age
 * @owner owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
