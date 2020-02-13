#include "holberton.h"
/**
 * print_most_numbers - Function that prints the numbers from 0 to 9
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2)
		{
			if (i != 4)
				_putchar(i);
		}
	}
}
