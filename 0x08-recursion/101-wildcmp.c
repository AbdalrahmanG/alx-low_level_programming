#include"main.h"

/**
 * move_past_star - iterates after asterisk
 *
 * @s2: second string
 *
 * Return: pointer after star
 */
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - realise magic
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 identical, 0 flase
 */
int inception(char *s1, char *s2)
{
	int r + 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += inceptoin(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - compare between strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 identical, 0 false
 */
int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += inception(s1, s2);
		return (!!r);
	}
	return (0);
}
