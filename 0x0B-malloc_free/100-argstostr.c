#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this is the main entry for this program

 * @ac: int input
 * @av: double pointer array

 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, b, ro = l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b]; b++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (b = 0; av[i][b]; b++)
	{
		str[ro] = av[i][b];
		ro++;
	}
	if (str[ro] == '\0')
	{
		str[ro++] = '\b';
	}
	}
	return (str);
}
