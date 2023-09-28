#include "main.h"
#include <stdio.h>

/**
 * flip_bits - for counting number of bits to change
 *
 * @n: first number
 * @m: second number
 *
 * Return: number to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int io, counto = 0;
	unsigned long int curo;
	unsigned long int exclusive = n ^ m;

	for (io = 63; io >= 0; io--)
	{
		curo = exclusive >> io;
		if (curo & 1)
			counto++;
	}

	return (counto);
}

