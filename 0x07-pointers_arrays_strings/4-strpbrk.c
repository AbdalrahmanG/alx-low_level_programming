#include"main.h"

/**
 * _strpbrk - search a string for any  set of bytes
 *
 * @s: string value
 * @accept: matching checker string
 *
 * Return: pointer s if its value is acceptable or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *f;

	i = 0;
	while (s[i] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
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
