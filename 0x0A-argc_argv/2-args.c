#include <stdio.h>

/**
 * main - for printing the passed argument numbers
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int nmb = 0;

	while (argc--)
	{
		printf("%s\n", argv[nmb]);
		nmb++;
	}
	return (0);
}
