#include"variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - for printing separator in strings
 *
 * @separator: separator string
 * @n: argument number
 * @...: strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ie;
	va_list listo;
	char *hold;

	va_start(listo, n);
	for (ie = 0; ie < n; ie++)
	{
		hold = va_arg(listo, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (ie != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(listo);
}
