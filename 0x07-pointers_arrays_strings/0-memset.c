#include"main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer that put the constant
 * @b: constant
 * @n: max number of bytes
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
