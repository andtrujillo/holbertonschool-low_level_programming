#include "holberton.h"
/**
 * print_line - Function that prints '_', n times
 * @n: integer that is the number of times that will print a line, '_'.
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
