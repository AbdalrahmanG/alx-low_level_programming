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
	unsigned int ao;
	va_list lss;
	int m;

	va_start(lss, n);
	for (ao = 0, m = 0; ao < n; ao++)
		m += va_arg(lss, int);
	va_end(lss);
	return (m);
}
