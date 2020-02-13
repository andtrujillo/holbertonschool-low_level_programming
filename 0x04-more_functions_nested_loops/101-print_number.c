#include "holberton.h"
/**
 * main - prints a number
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n >= 1000)
	{
		_putchar((n/1000)) + '0');
		_putchar((n / 100) + '0');
		_putchar((n/ 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar((n/ 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 0)
		_putchar(n + '0');
	else 

		
}
