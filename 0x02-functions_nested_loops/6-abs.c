#include"main.h"

/**
 * _abs - function that computes the absolute
 *	vlaue of an ibteger
 *
 * @n: takes in integer type input for function
 *
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
