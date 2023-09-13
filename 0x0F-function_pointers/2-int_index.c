#include"function_pointers.h"

/**
 * int_index - function for searching for int
 *
 * @array: array of int
 * @size: array size
 * @cmp: comparing between ints
 *
 * Return: int value, or else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ni = 0;

	if (array && size && cmp)
		while (ni < size)
		{
			if (cmp(array[ni]))
				return (ni);
			ni++;
		}
	return (-1);
}
