#include "holberton.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * Return: The value of the last digit
 */
int print_last_digit(int last)
{
	int temp = 0;

	if (last < 0)
		last *= -1;
	temp = last % 10;
	_putchar('0' + temp);
	return (temp);
}
