#include"main.h"
#include <stdlib.h>

/**
 * string_nconcat - it is the function of 2 concatenates strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: valude of number of characters
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int ab = 0, ui = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ch = malloc(sizeof(char) * (len1 + n + 1));
	else
		ch = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ch)
		return (NULL);

	while (ab < len1)
	{
		ch[ab] = s1[ab];
		ab++;
	}

	while (n < len2 && ab < (len1 + n))
		ch[ab++] = s2[ui++];

	while (n >= len2 && ab < (len1 + len2))
		ch[ab++] = s2[ui++];

	ch[ab] = '\0';
	return (ch);
}
