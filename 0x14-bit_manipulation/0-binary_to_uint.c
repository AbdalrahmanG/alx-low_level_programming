#include "main.h"

/**
 * binary_to_uint - for converting binary number to unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	int io;
	unsigned int dec_dac = 0;

	if (!b)
		return (0);

	for (io = 0; b[io]; io++)
	{
		if (b[io] < '0' || b[io] > '1')
			return (0);
		dec_dac = 2 * dec_dac + (b[io] - '0');
	}

	return (dec_dac);
}
