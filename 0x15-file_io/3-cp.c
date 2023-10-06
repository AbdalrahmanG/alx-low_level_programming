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
	char *buo;

	buo = malloc(sizeof(char) * 1024);

	if (buo == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buo);
}

/**
 * close_file - for closing file-descriptor
 *
 * @fdes: it's the closed file-descriptor
 */

void close_file(int fdes)
{
	int so;

	so = close(fdes);
	if (so == -1)
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
	int opo, oo, ed, ro;
	char *buo;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buo = create_buffer(argv[2]);
	opo = open(argv[1], O_RDONLY);
	ed = read(opo, buo, 1024);
	oo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (opo == -1 || ed == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buo);
			exit(98);
		}
		ro = write(oo, buo, ed);

		if (oo == -1 || ro == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buo);
			exit(99);
		}
		ed = read(opo, buo, 1024);
		oo = open(argv[2], O_WRONLY | O_APPEND);

	} while (ed > 0);
	free(buo);
	close_file(opo);
	close_file(oo);
	return (0);
}

