#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is main function for checking code
 *
 * @argc: args number
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int byteso, a;
	char *arro;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byteso = atoi(argv[1]);

	if (byteso < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arro = (char *)main;

	for (a = 0; a < byteso; a++)
	{
		if (a == byteso - 1)
		{
			printf("%02hhx\n", arro[a]);
			break;
		}
		printf("%02hhx ", arro[a]);
	}
	return (0);
}
