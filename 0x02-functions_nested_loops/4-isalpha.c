#include "holberton.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: The character to print
 * Return: If letter is lowercase or uppercase (1), and (0) otherwise
 */
int _isalpha(int c)
{
	if (c < 123 && c > 96)
	{
			return (1);
	}
	if (c > 64  && c < 91)
	{
		return (1);
	}

	return (0);
}
