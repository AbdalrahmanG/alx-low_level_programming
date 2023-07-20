#include"function_pointer.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function for checking code
 *
 * @argc: args number
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *j = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);

	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *j++, b ? " " : "\n");
	return (0);
}
