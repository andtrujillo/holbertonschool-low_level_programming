#include "holberton.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @last: number to take last digit from
 * Return: The value of the last digit
 */
int print_last_digit(int last)
{
	int temp;

	temp = last % 10;

	if (temp < 0)
		temp = temp * -1;

	_putchar('0' + temp);
	
	return (temp);
}
