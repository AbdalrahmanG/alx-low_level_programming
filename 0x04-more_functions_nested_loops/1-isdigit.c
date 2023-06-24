#include"main.h"

/**
 * _isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if c is digit, 0 if not
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
