#include<stdio.h>
#include "holberton.h"
/**
 * print_alphabet - Function that prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < (97 + 26); i++)
		_putchar(i);
	_putchar('\n');

}
