#include"dog.h"
#include <stdio.h>

/**
 * print_dog - print a dog pic
 *
 * @d: Prints of dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
