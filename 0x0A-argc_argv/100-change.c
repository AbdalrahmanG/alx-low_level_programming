#include <stdio.h>
#include <stdlib.h>

/**
 * main - for printing minimum coins number
 *
 * @argc: commandline argument number
 * @argv: array pointer of argument commandline
 *
 * Return: 0 success, non-zero-fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lstcnts = 0, mony = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mony >= cents[i])
			{
				lstcnts += mony / cents[i];
				mony = mony % cents[i];
				if (mony % cents[i] == 0)
				{
					break;
				}

			}
		}
		printf("%d\n", lstcnts);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
