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
 * Return: string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list string;

	num = 0;
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(string, int);
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
