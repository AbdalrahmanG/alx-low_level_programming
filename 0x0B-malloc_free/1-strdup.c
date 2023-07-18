#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return to a duplicated allocated space using malloc
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *j;
	int i = 0, s = 0;

	if (str == NULL)
		return (NULL);
	for (str[s] != '\0'; size++)
		;
	j = malloc(s * sizeof(*str) + 1);
	if (j == 0)
	{
		return (NULL);
	}
	else
	{
		for (i < s; i++)
			j[i] = str[i];
	}
	return (j);
}
