#include <stdio.h>
#include <stdlib.h>

/**
 * main - for printing the sum of two numbers
 *
 * @argc: argument number of commandline
 * @argv: array pointer of command line argument
 *
 * Return: 0 success, non-zero-fail
 */
int main(int argc, char *argv[])
{
	int sms;

	if (argc == 3)
	{
		sms = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sms);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
