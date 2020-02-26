#include "holberton.h"
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
