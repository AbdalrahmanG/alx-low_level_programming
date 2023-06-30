#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @c: string
 *
 * Return: string that is encoded
 */
char *leet(char *c)
{
	int i = 0, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (c[i])
	{
		for (j = 0; j < 10; j++)
			if (c[i] == str[j])
				c[i] = subs[j];

		i++;
	}

	return (c);
}
