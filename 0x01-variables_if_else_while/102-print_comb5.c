#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int d, p;

	for (d = 0; d <= 98; d++)
	{
		for (p = d + 1; p <= 99; p++)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			if (d == 98 && p == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
