#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: parameter of function that is to be compared
 * @s2: parameter of function that is to be compared with s1
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
