#include<stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - Function that prints the alphabet 10x then followed
 * by a newline character.
 *
 * Return: none (void)
 */
void print_alphabet_x10(void)
{
	int i;
	int a_ten_count = 0;

	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	} while (a_ten_count++ < 9);
}
