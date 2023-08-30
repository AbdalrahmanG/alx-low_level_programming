#include"main.h"

/**
 * _puts_recursion - for printing a string then a new line.
 *
 * @s: the string pointer
 *
 * Return: void
 */
void _puts_recursion(char *st)
{
	if (*st == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*st);
		_puts_recursion(st + 1);
	}
}

