#include "holberton.h"
int palindrome(char *str, int len, int start);
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: character arrray
 * Return: integer of length of array
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: character array
 * Return: integer
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (palindrome(s, l - 1, 0));
}
/**
 * palindrome - helper function
 * @s: character array
 * @l: length
 * @start: starting point of array
 * Return: integer
 */
int palindrome(char *s, int l, int start)
{
	if (l == start)
		return (1);
	if (s[l] != s[start])
		return (0);
	if ((start + 1) < l)
		return (palindrome(s, l - 1, start + 1));
	return (1);
}
