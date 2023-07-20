#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - operator addition
 *
 * @a: first int
 * @b: second int
 *
 * Return: sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operator subtraction
 *
 * @a: first int
 * @b: second int
 *
 * Return: differance between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - operator division
 *
 * @a: first int
 * @b: second int
 *
 * Return: divide a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operator remainder after division
 *
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of operators division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
