#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to compute factorial from
 * Return: integer value
 */
int factorial(int n)
{
	int prime = 0;

	if (n > 1)
		prime += factorial(n - 1);

	return (prime);
}
