#include"main.h"

/**
 * str_concat - 2 strings by using mollc
 *
 * @s: string 1
 * @s2: string 2
 *
 * Return: string pointer
 */
char str_concat(char *s, char *s2)
{
	char *m;
	int a, b, c, d;

	if (s == NULL)
		s = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	m = malloc((a * sizeof(*s)) + (b * sizeof(*s2)) + 1);

	if (m == NULL)
		return (NULL);
	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			m[c] = s[c];
		else
			m[c] = s2[d++];
	}
	return (m);
}
