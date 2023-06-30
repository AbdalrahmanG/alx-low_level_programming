#include "main.h"

/**
 * string_toupper -  changes all lowercase to uppercase
 *
 * @str: string to return
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (sr[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
