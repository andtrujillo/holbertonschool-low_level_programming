#include "holberton.h"
/**
 * _puts_recursion - places a character on screen one at a time using a recursive function call
 * @s: the character array
 * Return: void 
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');	
}
