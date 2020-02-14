#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of
 * number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long prime_num = 612852475143, i;

	for (i = 2; i < sqrt(prime_num); i++)
	{
		if (prime_num % i == 0)
			prime_num /= i;
	}
	printf("%li\n", prime_num);
	return (0);
}
