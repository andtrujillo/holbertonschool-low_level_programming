#include "holberton.h"
/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: the base number 
 * @y: the exponent
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	int v = 0;

	if (y == 0)
		v = 1;
	else if(y == 1)
		v = x;
	else if (x > 1 && y > 0)
		v = _pow_recursion(x * x, y - 1);	
	
	return (v);
}

