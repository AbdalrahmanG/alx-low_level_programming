#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile- for reading text file and printing it
 *
 * @filename: it is a pointer for pointing to text direction
 * @letters: for printing the letters number
 *
 * Return: the true value of number or else, 0 when fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o;
	ssize_t r;
	ssize_t ed;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	ed = read(o, buf, letters);
	r = write(STDOUT_FILENO, buf, ed);
	free(buf);
	close(o);
	return (r);
}
