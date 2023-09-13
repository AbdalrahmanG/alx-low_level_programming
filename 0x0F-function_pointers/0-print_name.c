#include"function_pointers.h"

/**
 * print_name - for printing the name
 *
 * @name: name
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
