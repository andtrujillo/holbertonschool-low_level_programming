#include "holberton.h"

/**
 * print_number - print num_ with putchar
 * @num_: number to print
 * Return: always void
 */
void print_number(int num_)
{
	if (num_ < 0)
	{
		_putchar('-');
		print_one_digit(-(unsigned int)num_);
	}
	else
		print_unsigned_int(num_);
}
/**
 * print_unsigned_int - prints an unsigned integer
 * @num_: an unsigned integer to print
 * Return: always void
 */
void print_one_digit(unsigned int num_)
{
	if (num_ / 10 != 0)
	{
		print_one_digit(num_ / 10);
	}
	_putchar((num_ % 10) + '0');
}
