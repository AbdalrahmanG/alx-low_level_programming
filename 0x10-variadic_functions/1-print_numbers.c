#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - for printing separator numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of args passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ie;
	va_list listo;

	va_start(listo, n);
	for (ie = 0; ie < n; ie++)
	{
		printf("%d", va_arg(listo, int));
		if (ie != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(listo);
}
