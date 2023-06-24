#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * Return: 0 (Sucess)
 */
void print_triangle(int size)
{
	int a = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
