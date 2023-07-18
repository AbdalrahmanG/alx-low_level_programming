#include"main.h"
#include <stdlib.h>

/**
 * string_nconcat - function of 2 concatenates string
 *
 * @s1: the first string
 * @s2: the second string
 * @n: valude of number of characters
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c = 0; c != '\0'; c++)
		;
	for (d = 0; d != '\0'; d++)
		;
	s = malloc(c + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for  (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[a] = '\0';
	return (s);
}
