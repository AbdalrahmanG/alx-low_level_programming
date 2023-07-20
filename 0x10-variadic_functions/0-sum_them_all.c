#include"variadic_functions.h"

/**
 * sum_them_all - the summation of all variables
 *
 * @n: argument number
 * @...: integers to be summed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int m = 0, n = b;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (b--)
		m += va_arg(ap, int);
	va_end(ap);
	return (s);
}
