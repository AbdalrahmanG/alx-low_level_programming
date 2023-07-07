#include"main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: changable memory area
 * @src: new meory area
 * @n: lenth of src to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
