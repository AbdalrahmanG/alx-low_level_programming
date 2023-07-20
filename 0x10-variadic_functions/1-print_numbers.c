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
