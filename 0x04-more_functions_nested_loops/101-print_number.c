#include "holberton.h"
/**
 * four_digit - Function that prints four digits.
 * @n: integer number that is to be printed with _putchar()
 * Return: void (none)
 */
void four_digit(int n)
{

	_putchar((n / 1000) + '0');
	_putchar((n / 100) % 10 + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
/**
 * three_digit - Function that prints three digits
 * @n: integer that will be printed with _putchar()
 * Return: void (none)
 */
void three_digit(int n)
{
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
/**
 * two_digit - function that prints two digits
 * @n: integer value of the characters printed
 * Return: void (none)
 */
void two_digit(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
/**
 * print_number - prints an integer with ascii
 * @n: integer value of value to be converted to ascii code and back to decimal
 * Return: Always 0.
 */
void print_number(int n)
{
	int negative = 0, hasPrinted = 1;

	if (n < 0)
	{
		n *= -1;
		hasPrinted = 0, negative = 1;
	}
	if (n >= 1000)
	{
		if (negative)
			_putchar('-');

		four_digit(n);
		return;
	}
	if (n >= 100 && n < 1000)
	{
		if (negative)
			_putchar('-');

		three_digit(n);
		return;
	}
	if (n >= 10 && n < 100)
	{
		if (negative)
			_putchar('-');

		two_digit(n);
		return;
	}
	if (n >= 0 && n < 10)
		_putchar(n + '0');

	if (!hasPrinted)
		_putchar('\n');

	if (hasPrinted && negative)
		return;
}
