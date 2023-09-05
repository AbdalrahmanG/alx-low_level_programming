#include <stdlib.h>
#include "main.h"

/**
 * count_word - for helping to count numbers of words in the string

 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int fg, c, wr;

	fg = 0;
	wr = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			fg = 0;
		else if (fg == 0)
		{
			fg = 1;
			wr++;
		}
	}

	return (wr);
}

/**
 * **strtow - for spliting the string into some words

 * @str: string to split
 *
 * Return: pointer to array (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, kb = 0, ln = 0, word, c = 0, strt, endo;

	while (*(str + ln))
		ln++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= ln; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				endo = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < endo)
					*tmp++ = str[strt++];
				*tmp = '\0';
				matrix[kb] = tmp - c;
				kb++;
				c = 0;
			}
		}
		else if (c++ == 0)
			strt = i;
	}

	matrix[kb] = NULL;

	return (matrix);
}
