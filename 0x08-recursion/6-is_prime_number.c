#include "holberton.h"
int prime(int x, int n);
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: test condition for is a prime
 * Return: boolean integer
 */
int is_prime_number(int n)
{
	return (prime(3, n));
}
/**
 * prime - function that returns whether a number is prime
 * @x: number from where to start from
 * @n: number being checked containing all properties of a prime number
 * Return: integer
 */
int prime(int x, int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	if ((x * x) <= n)
	{
		if (n % x != 0 || n % (x + 2) != 0)
			prime(x + 6, n);
		else if (n % x == 0 || n % (x + 2) == 0)
			return (0);
	}
	return (1);
}
