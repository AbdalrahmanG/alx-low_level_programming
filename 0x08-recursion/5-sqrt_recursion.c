#include"main.h"

/**
 * _sqrt_recursion - it is for finding natural square root
 *
 * @n: int
 * @val: square root
 *
 * Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - this is for finding square root
 *
 * @n: to find square root
 * @val: square root
 *
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
