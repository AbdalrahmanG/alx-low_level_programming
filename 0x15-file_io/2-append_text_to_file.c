#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - for adding text/string at the end of file
 *
 * @filename: it's a pointer for pointing to file name
 * @text_content: the added text or string to files end
 *
 * Return: 1 when success otherwise, -1 when fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, r, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	r = write(op, text_content, n);

	if (op == -1 || r == -1)
		return (-1);
	close(op);
	return (1);
}
