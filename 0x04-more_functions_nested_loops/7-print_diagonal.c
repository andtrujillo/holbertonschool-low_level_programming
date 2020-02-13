#include "holberton.h"
/**
 * print_diagonal - Function that draws partial triangle
 * @n: integer of the amount of times to print triangle on screen
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
