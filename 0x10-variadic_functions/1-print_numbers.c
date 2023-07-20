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
	int n = a;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%d%s", va_arg(ap, int),
				a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
