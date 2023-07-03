#include"main.h"

/**
 * _strchr - a function that fills memory
 *
 * @s: a pointer to put string value
 * @c: constant
 *
 * Return: pointer s
 */
char *strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
