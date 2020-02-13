#include "holberton.h"
/**
 * main - Function that prints a triangle using pound signs
 * @size: amount of pound signs that will be printed or size of triangle
 * Return: none (void)
 */
void print_triangle(int size)
{
	int i, j;

	if (i < 1)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');

		for (k = 1; k < i; k++)
			_putchar(35);
	}
	_putchar('\n');
}
