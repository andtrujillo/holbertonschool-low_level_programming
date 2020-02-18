#include "holberton.h"
/**
 * puts2 - Prints even numbers from char array
 * @str: string of numbers
 * Return: void (none)
 */
void puts2(char *str)
{
	int count = 0, i = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);

	}
	_putchar('\n');
}
