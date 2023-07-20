#include"variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - to print separator in strings
 *
 * @separator: separator string
 * @n: argument number
 * @...: strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int n = a;
	char *t;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(l, n);
	while (a--)
		printf("%s%s", (t = va_arg(l, char *)) ? t : "(nil)",
				a ? (separator ? separator : "") : "\n");
	va_end(l);
}
