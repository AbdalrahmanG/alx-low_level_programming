#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fdes);

/**
 * create_buffer - for allocating bytes in buf
 *
 * @file: the chars stored buffers file name
 *
 * Return: to buff new allocated
 */

char *create_buffer(char *file)
{
	char *bu;

	bu = malloc(sizeof(char) * 1024);

	if (bu == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bu);
}

/**
 * close_file - for closing file-descriptor
 *
 * @fdes: it's the closed file-descriptor
 */

void close_file(int fdes)
{
	int s;

	s = close(fdes);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes);
		exit(100);
	}
}

/**
 * main - for coping file contents to another file
 *
 * @argc: The argument-number supplied by program
 * @argv: it's array to arguments pointer
 *
 * Return: 0 when success.
 */

int main(int argc, char *argv[])
{
	int op, oo, ed, r;
	char *bu;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bu = create_buffer(argv[2]);
	op = open(argv[1], O_RDONLY);
	ed = read(op, bu, 1024);
	oo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (op == -1 || ed == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bu);
			exit(98);
		}
		r = write(oo, bu, ed);
		
		if (oo == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bu);
			exit(99);
		}
		ed = read(op, bu, 1024);
		oo = open(argv[2], O_WRONLY | O_APPEND);

	} while (ed > 0);
	free(bu);
	close_file(op);
	close_file(oo);
	return (0);
}
