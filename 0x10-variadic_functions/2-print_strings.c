#include"variadic_functions.h"

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
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
