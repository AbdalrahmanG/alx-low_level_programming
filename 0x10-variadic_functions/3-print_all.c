#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * format_int - for printing integers
 *
 * @separator: separator string
 * @list: va_list 
 */
void format_int(char *separator, va_list list)
{
        printf("%s%d", separator, va_arg(list, int));
}

/**
 * format_char - for printing string
 *
 * @separator: separator string
 * @list: va_list 
 */
void format_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * format_float - for printing float format
 *
 * @separator: separator string
 * @list: va_list 
 */
void format_float(char *separator, va_list list)
{
        printf("%s%f", separator, va_arg(list, double));
}

/**
 * format_string - for printing string
 *
 * @separator: separator string
 * @list: va_list
 */
void format_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
		case 1:
		str = "(nil)";
        printf("%s%s", separator, str);
}

/**
 * print_all - for printing anything if it is int, char, float,  string.
 * @format: format of strings
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	types storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
