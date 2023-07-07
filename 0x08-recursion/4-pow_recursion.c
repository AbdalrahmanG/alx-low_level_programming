#include"main.h"

/**
 * _pow_recursion - search for any bytes set
 *
 * @x: base
 * @y: exposant
 *
 * Return: to `s` when its value is acceptable or else null
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
