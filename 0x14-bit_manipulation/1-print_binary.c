#include "main.h"

/**
 * print_binary - for printing a binary equivalent of a decimal number
 *
 * @n: number print binary
 *
 */

void print_binary(unsigned long int n)
{
	int io, counto = 0;
	unsigned long int curo;

	for (io = 63; io >= 0; io--)
	{
		curo = n >> io;

		if (curo & 1)
		{
			_putchar('1');
			counto++;
		}
		else if (counto)
			_putchar('0');
	}
	if (!counto)
		_putchar('0');
}
