#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to compute factorial from
 * Return: integer value
 */
int factorial(int n)
{
	int f;

	if (n > 0)
		f = factorial((n - 1)) * n;
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (f);
}
