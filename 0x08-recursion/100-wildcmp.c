#include "holberton.h"
/**
 * wildcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: if they are the same we return one if not zero
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, (s2 + 1)));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));
		if (wildcmp(s1, s2 + 1))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	return (0);
}
