#include "holberton.h"
/**
 * set_string - function that sets the value of a pointer to a character
 * @s: string to be modified
 * @to: string to copy from
 * Return: none (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
