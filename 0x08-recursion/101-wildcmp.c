#include "main.h"

/**
 * *move_past_star - interates past
 * @s2: the secone string
 * Return: the pointer past star
 *
 */

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - makes magic a reality
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical. 0if false
 *
 */

int inception(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);

	r += inception(s1 + 1, s2);
	return (r);
}

/**
 * wildcmp - comgpares tow strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 if false
 *
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
