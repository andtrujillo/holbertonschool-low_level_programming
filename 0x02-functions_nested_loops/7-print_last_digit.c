#include "holberton.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * Return: The value of the last digit
 */
int print_last_digit(int last)
{
	unsigned int temp = 0;

	temp = last % 10;
	if (temp < 0)
		temp *= -1;
	_putchar('0' + temp);
	return (temp);
}
