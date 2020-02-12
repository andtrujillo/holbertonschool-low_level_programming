#include <stdio.h>
/**
 * main - Our program that prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int nextFib = 0, firstFib = 0, secondFib = 1;
	int i;

	for (i = 0; i < 50; i++)
	{
		nextFib = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = nextFib;

		if (i != 49)
			printf("%ld, ", nextFib);
		else
			printf("%ld\n", nextFib);


	}
	return (0);
}

