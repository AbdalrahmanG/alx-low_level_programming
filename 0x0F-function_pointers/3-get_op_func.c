#include"3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - get returned to the right op pointer
 *
 * @s: operator string
 *
 * Return: to the right pointer function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int io;

	io = 0;
	while (io < 5)
	{
		if (s && s[0] == ops[io].op[0] && !s[1])
			return (ops[io].f);
		 io++;
	}
	return (NULL);
}
