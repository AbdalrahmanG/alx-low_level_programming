#include"main.h"

/**
 * _strstr - find the string needle substring
 *
 * @haystack: final variable output
 * @needle: variable affecting haystack
 *
 * Return: pointer if the value accepted or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, i1, i2;

	i = 0;
	while (haystack[i] != '\0')
	{
		i2 = i;
		i1 = 0;
		while (needle[i1] != '\0' && needle[i1]
				== haystack[i] && haystack[i] != '\0')
		{
			i++;
			i1++;
		}
		if (needle[i1] == '\0')
		{
			return (haystack + i2);
		}
		i = i2 + 1;
	}
	return (0);
}
