#include"function_pointers.h"

/**
 * array_iterator - for excuting array through function
 *
 * @array: array ints
 * @size: size of array
 * @action: pointer function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ed = array + size - 1;

	if (array && size && action)
		while (array <= ed)
			action(*array++);
}
