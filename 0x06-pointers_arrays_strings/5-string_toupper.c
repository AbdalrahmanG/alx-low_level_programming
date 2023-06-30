#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to upper case
 *
 * @s: an input string
 *
 * Return: char pointer to converted string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
