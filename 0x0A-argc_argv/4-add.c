#include <stdio.h>
#include <stdlib.h>

/**
 * main - for starting the command
 *
 * @argc: argument number
 * @argv: array pointer of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sms = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sms += atoi(argv[argc]);
	}
	printf("%d\n", sms);
	return (0);
}
