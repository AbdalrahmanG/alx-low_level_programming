#include"main.h"

/**
 * _strpbrk - search a string for any  set of bytes
 *
 * @s: string value
 * @accept: matching checker string
 *
 * Return: to pointer if the value accepted, or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				f = &s[i];
				return (f);
			}
			j++;
		}
		i++;
	}
	return (0);
}
