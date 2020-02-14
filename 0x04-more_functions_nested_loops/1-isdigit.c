#include "holberton.h"
/**
 * _isdigit - Checks whether character is a digit in the ascii value table
 * @c: integer
 * Return: integer (1) If a number and (0) otherwise if its not a number
 */
int _isdigit(int c)
{
	int x;

	if (c >= 48 && c < 58)
		x = 1;
	else
		x = 0;

	return (x);
}
