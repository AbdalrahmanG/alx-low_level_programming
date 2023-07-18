#include"main.h"

/**
 * argstostr - concatenates all arguments
 *
 * @ac: arguments number
 * @av: double array pointer
 *
 * Return: string pointer, or NULL when fail
 */
char *argstostr(int ac, char **av)
{
	char *n, *m;
	int a, b, c;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; j++, c++)
			;
		c++;
	}
	c++;
	m = malloc(c * sizeof(char));
	if (m == NULL)
		return (NULL);
	n = m;
	for (a = 0; a < ac; i++)
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
