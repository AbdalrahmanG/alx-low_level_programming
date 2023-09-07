#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - it is for checking the string contains char
 *
 * @s: string
 *
 * Return: 0 if a non-digit is found, if else 0
 */
int is_digit(char *s)
{
	int ao = 0;

	while (s[ao])
	{
		if (s[ao] < '0' || s[ao] > '9')
			return (0);
		ao++;
	}
	return (1);
}

/**
 * _strlen - it is for returnig strings length.
 *
 * @s: string
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int ao2 = 0;

	while (s[ao2] != '\0')
	{
		ao2++;
	}
	return (ao2);
}

/**
 * errors - for handling main error
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - it is for multipling 2 numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *sr1, *sr2;
	int ln1, ln2, len, it, carry, digit1, digit2, *result, ao = 0;

	sr1 = argv[1], sr2 = argv[2];
	if (argc != 3 || !is_digit(sr1) || !is_digit(sr2))
		errors();
	ln1 = _strlen(sr1);
	ln2 = _strlen(sr2);
	len = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (it = 0; it <= ln1 + ln2; it++)
		result[it] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		digit1 = sr1[ln1] - '0';
		carry = 0;
		for (ln2 = _strlen(sr2) - 1; ln2 >= 0; ln2--)
		{
			digit2 = sr2[ln2] - '0';
			carry += result[ln1 + ln2 + 1] + (digit1 * digit2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + 1] += carry;
	}
	for (it = 0; it < len - 1; it++)
	{
		if (result[it])
			ao = 1;
		if (ao)
			_putchar(result[it] + '0');
	}
	if (!ao)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
