#include <stdio.h>
/**
 * main - Entry point to our program that prints the first 50 Fibonacci numbers,
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int nextFib = 0, firstFib = 1, secondFib = 2;
	int i;
	
	printf("%ld, %ld ", firstFib, secondFib);
	for (i = 0; i < 49; i++)
	{
		nextFib = firstFib + secondFib;
		printf("%ld ", nextFib);
		firstFib = secondFib;
		secondFib = nextFib;
	}
}

