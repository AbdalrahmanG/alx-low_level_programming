#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct token - the token
 *
 * @token: token format
 * @f: fucntion
 */
typedef struct types
{
	char *type;
	void (*f)();
} types;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
