#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - for returning to string length
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int ai;

	ai = 0;

	while (s[ai] != '\0')
	{
		ai++;
	}
	return (ai);
}

/**
 * *_strcpy - for copping the string
 *
 * @dest: buffer pointer
 * @src: string
 *
 * Return: the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len, aie;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (aie = 0; aie < len; aie++)
	{
		dest[aie] = src[aie];
	}
	dest[aie] = '\0';
	return (dest);
}

/**
 * new_dog - creates dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog (Success) or, NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

