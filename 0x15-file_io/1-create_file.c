#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - for creating files
 *
 * @filename: it's a pointer for pointing to file name
 * @text_content: it's a pointer for pointing to writen string
 *
 * Return: 1 when success or, -1 when fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, a, r;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (o == -1)
	{
		close(o);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (a = 0; text_content[a] != '\0'; a++)
			;
		r = write(o, text_content, a);
		if (r == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);
	return (1);
}
