#include "holberton.h"
int _sqrt(int i, int n);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find square of
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	int x;

	x = _sqrt(0, n);
	return (x);
}
/**
 * _sqrt - function that returns the square root of a number
 * @i: start of check for square
 * @n: number that we need to find square root of
 * Return: the square root
 */
int _sqrt(int i, int n)
{
	int x;

	if ((i * i) == n)
		x = i;
	if ((i * i) < n)
		x = _sqrt(i + 1, n);
	if ((i * i) > n)
		x = -1;
	return (x);
}

