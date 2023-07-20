#include"variadic_fucntions.h"

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
	unsigned int a;
	va_list l;

	va_start(l, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(l, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
