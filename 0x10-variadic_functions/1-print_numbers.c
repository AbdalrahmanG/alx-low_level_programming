#include"variadic_fucntions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print separator in numbers
 *
 * @separator: separator string
 * @n: argument number
 * @...: integers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
