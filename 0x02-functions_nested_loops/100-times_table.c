#include "holberton.h"
/**
 * print_comma_space - no parameters, prints a comma and space
 * when called
 * Return: void (none)
 */
void print_comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_doublespc - no parameters, print double spaces when called.
 * Return: void (none)
 */
void print_doublespc(void)
{
	_putchar(' ');
	_putchar(' ');
}
/**
 * print_three_digit - Prints the
 * @num: integer number multiplied
 * Return: none
 */
void print_three_digit(int num)
{
	_putchar((num / 100) + '0');
	_putchar((num / 10 % 10) + '0');
	_putchar((num % 10) + '0');
}
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int outer, inner, multiplied;

	if (n < 0 || n > 15)
		return;

	for (outer = 0; outer <= n; outer++)
	{
		for (inner = 0; inner <= n; inner++)
		{
			multiplied = outer * inner;

			if (multiplied >= 100)
				print_three_digit(multiplied);

			else if (multiplied >= 10)
			{
				_putchar(' ');
				_putchar((multiplied / 10) + '0');
				_putchar((multiplied % 10) + '0');
			}
			else if (inner != 0)
			{
				print_doublespc();
				_putchar(multiplied + '0');
			}
			else
				_putchar(multiplied + '0');


			if (inner != n)
				print_comma_space();

		}
		_putchar('\n');
	}
}
