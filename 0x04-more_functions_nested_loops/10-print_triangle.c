#include "holberton.h"
/**
 * main - Function that prints a triangle using pound signs
 * @size: amount of pound signs that will be printed or size of triangle
 * Return: none (void)
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			_putchar('#');
			break;
		}

		for (j = size; j > 0; j--) /* Subtract from size to have proper count of spaces */
		{
			if (j != i && i != 0) /* No spaces at end of line(j != i) and when (i!=0) */
				_putchar(' ');
		}
		_putchar(35);

	}
	_putchar('\n');
}
