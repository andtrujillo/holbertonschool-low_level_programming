#include "holberton.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: The character to print
 * Return: integer (1) if 'c' is lowercase or (0) if not a lowercase character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
