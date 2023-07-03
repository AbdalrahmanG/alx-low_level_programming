#include"main.h"
#include <stdio.h>

/**
 * print_diagsums - to print the sum
 *
 * @a: pointer takes the matrix value
 * @size: the size of matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, i1 = 0, i2 = 0;

	for (i = 0; i < size; i++)
	{
		i1 += a[i];
		i2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", i1);
	printf("%d\n", i2);
}
