#include <stdio.h>

/**
 * main - for printing argument numbers
 *
 * @argc: number of argument commandline
 * @argv: array pointer of argument
 *
 * Return: 0 success, non-zero-fail
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
