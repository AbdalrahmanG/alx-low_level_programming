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
	int opo, ro, no = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (no = 0; text_content[no];)
			no++;
	}
	opo = open(filename, O_WRONLY | O_APPEND);
	ro = write(opo, text_content, no);

	if (opo == -1 || ro == -1)
		return (-1);
	close(opo);
	return (1);
}
