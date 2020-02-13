#include "holberton.h"
/**
 * print_line - Function that draws a straight line in terminal window
 * @n: integer of the amount of times to print the line
 * Return: none
 */
void print_diagonal(int n)
{
	int i, j = 0;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{

			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
}
