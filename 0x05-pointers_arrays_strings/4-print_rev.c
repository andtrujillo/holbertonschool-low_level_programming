#include "holberton.h"
/**
 * print_rev - Function that prints string
 * in reverse.
 * @string: string to be printed backwards
 * Return: void
 */
void print_rev(char *string)
{
	int reverse = 0;
	/**
     * Walk pointer forward
	 * keeping an index for reversing
	 * because calling strlen wont work
	 * in function out of mains scope
	 * where char *string was defined
	 * initially.
	 */
	while (*string != 0)
	{
		string++;
		reverse++;
	}

	/**
	 * Move pointer and index
	 * back one character to
	 * account for null character.
	 */
	string--;
	reverse--;

	/**
	 * String pointer is at one
	 * position from end. Safe
	 * to start doing pointer
	 * arithmetic.
	 */
	while (reverse >= 0)
	{
		_putchar(*string);
		string--;
		reverse--;
	}
	_putchar('\n');
}
