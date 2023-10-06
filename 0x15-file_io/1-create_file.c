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
	int oo, ao, ro;

	if (filename == NULL)
		return (-1);
	oo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (oo == -1)
	{
		close(oo);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (ao = 0; text_content[ao] != '\0'; ao++)
			;
		ro = write(oo, text_content, ao);
		if (ro == -1)
		{
			close(oo);
			return (-1);
		}
	}

	close(oo);
	return (1);
}
