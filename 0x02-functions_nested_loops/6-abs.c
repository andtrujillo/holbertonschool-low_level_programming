#include "holberton.h"
/**
 * _abs - Function that computes the absolute value of an integer
 * @abs_value: integer
 * Return: The absolute value of number passed to function
 */
int _abs(int abs_value)
{
	if (abs_value < 0)
		return (abs_value*-1);
	
	if (abs_value >= 0)
		return (abs_value);
}
