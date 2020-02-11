#include "holberton.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: integer parameter of number to be checked
 * Return: integer
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		x = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	return (x);
	_putchar('\n');
}
