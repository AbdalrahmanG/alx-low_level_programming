#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile- it is for reading text file and printing it
 *
 * @filename: it is a pointer for pointing to text direction
 * @letters: for printing the letters number
 *
 * Return: the true value of number or else, 0 when fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufo;
	ssize_t oo;
	ssize_t ro;
	ssize_t ed;

	oo = open(filename, O_RDONLY);
	if (oo == -1)
		return (0);

	bufo = malloc(sizeof(char) * letters);
	ed = read(oo, bufo, letters);
	ro = write(STDOUT_FILENO, bufo, ed);
	free(bufo);
	close(oo);
	return (ro);
}
