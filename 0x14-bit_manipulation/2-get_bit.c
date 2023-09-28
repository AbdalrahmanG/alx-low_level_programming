#include "main.h"

/**
 * get_bit - for returning a value of a bit at an index in decimal
 *
 * @n: number to search
 * @index: index of the bit
 *
 * Return: true value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_bot;

	if (index > 63)
		return (-1);

	bit_bot = (n >> index) & 1;

	return (bit_bot);
}
