#include "holberton.h"
/**
 * puts_half - prints last half of array
 * @str: character array to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, characters = 0;
	int i;

	while (*(str + length) != '\0')
		length++;

	if (length % 2 != 0)
		characters = (length - 1) / 2;
	else
		characters = length / 2;

	for (i = 0; i < characters; i++)
		_putchar(str[length - characters + i]);

	_putchar('\n');
}
