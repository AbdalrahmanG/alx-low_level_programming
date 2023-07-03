#include"main.h"

/**
 * set_string - set value of pointer of a char
 *
 * @s: pointer to pointer
 * @to: pointer contain string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
