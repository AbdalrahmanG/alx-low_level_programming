#include"main.h"
#include <stdlib.h>

/**
 * argstostr - for concatenating all the arguments
 *
 * @ac: arguments number
 * @av: double array pointer
 *
 * Return: string pointer, or NULL when fail
 */
char *argstostr(int ac, char **av)
{
	char *n, *m;
	int a, b, co;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0, o = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, o++)
			;
		o++;
	}
	o++;
	m = malloc(o * sizeof(char));
	if (m == NULL)
		return (NULL);
	n = m;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*m = av[a][b];
			m++;
		}
		*m = '\n';
		m++;
	}
	return (n);
}
