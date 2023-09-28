#include "main.h"

/**
 * get_endianness - for checking the machine wgen little or big endian
 * Re
 */

int get_endianness(void)
{
	unsigned int io = 1;
	char *c = (char *) &io;

	return (*c);
}
