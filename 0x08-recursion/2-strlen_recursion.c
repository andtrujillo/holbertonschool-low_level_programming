#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: character arrray
 * Return: integer of length of array
 */
int _strlen_recursion(char *s)
{
	int i;

	if(*s)
	{
		if(*(s+1)!= '\0')
				i = _strlen_recursion(s + 1);
	}

	return (i + 1);

}
