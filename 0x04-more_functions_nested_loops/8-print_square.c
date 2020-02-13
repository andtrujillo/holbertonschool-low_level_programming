#include "holberton.h"
/**
 * print_square - Function that prints square
 * @size: The size of square
 * Return: void (none)
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
