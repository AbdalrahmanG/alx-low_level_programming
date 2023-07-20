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
	int a = n;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(l, n);
	while (a--)
		printf("%d%s", va_arg(l, int),
				a ? (separator ? separator : "") : "\n");
	va_end(l);
}
