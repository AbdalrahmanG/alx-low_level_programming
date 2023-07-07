#include"main.h"

/**
 * _islower - function to check if
 *		charcter is lowercase
 *
 * @c: chechs input of function
 *
 * Return: 1 if `c` is lowercase
 *		otherwise 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
