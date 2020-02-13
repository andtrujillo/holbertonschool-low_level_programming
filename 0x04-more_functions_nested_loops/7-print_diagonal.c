#include "holberton"
/**
 * print_line - Function that draws a straight line in terminal window
 * @n: integer of the amount of times to print the line
 * Return: none
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		for(j = 1; j < n + 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n');
}
