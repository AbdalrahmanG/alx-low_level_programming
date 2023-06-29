#include "main.h"

/**
 * swap_int - swaps the valuer of two integers.
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
