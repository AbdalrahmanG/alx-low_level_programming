#include "main.h"
#include <stdlib.h>

/**
 * _strdup - for returning to a duplicated allocated space using malloc
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *j;
	int m = 0, s = 0;

	if (str == NULL)
		return (NULL);
	for (; str[s] != '\0'; s++)
		;
	j = malloc(s * sizeof(*str) + 1);
	if (j == 0)
	{
		return (NULL);
	}
	else
	{
		for (; m < s; m++)
			j[m] = str[m];
	}
	return (j);
}
