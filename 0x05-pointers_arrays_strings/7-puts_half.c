#include "holberton.h"
/**
 * puts_half - prints last half of array
 * @str: character array to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, characters = 0;

	while (*(str + length) != '\0')
		length++;

	if (length % 2 != 0)
		characters = (length - 1) / 2;
	else
		characters = length / 2;

	while (characters < length)
		_putchar(*(str + characters++));

	_putchar('\n');
}
