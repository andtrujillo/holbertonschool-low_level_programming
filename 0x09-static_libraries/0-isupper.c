#include "holberton.h"
/**
 * _isupper - Checks to see if character is an upper case letter
 * @c: integer for character code in the ascii value table
 * Return: one if @c is uppercase, otherwise returns 0
 */
int _isupper(int c)
{
	int d;

	if (c >= 'A' && c <= 'Z')
		d = 1;
	else
		d = 0;

	return (d);
}
