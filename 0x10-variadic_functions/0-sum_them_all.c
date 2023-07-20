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
	unsigned int a;
	va_list l;
	int m;

	va_start(l, n);
	for (a = 0, m = 0; a < n; a++)
		m += va_arg(l, int);
	va_end(l);
	return (m);
}
