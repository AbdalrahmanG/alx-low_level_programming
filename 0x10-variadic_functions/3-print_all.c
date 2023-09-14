#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - for printing everytuing
 *
 * @format: arguments types list
 */

void print_all(const char * const format, ...)
{
	int ae = 0;
	char *str, *sep = "";

	va_list listo;

	va_start(listo, format);

	if (format)
	{
		while (format[ae])
		{
			switch (format[ae])
			{
				case 'c':
					printf("%s%c", sep, va_arg(listo, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(listo, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listo, double));
					break;
				case 's':
					str = va_arg(listo, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					ae++;
					continue;
			}
			sep = ", ";
			ae++;
		}
	}

	printf("\n");
	va_end(listo);
}
