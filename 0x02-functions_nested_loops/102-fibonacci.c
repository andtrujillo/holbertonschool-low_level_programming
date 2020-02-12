#include <stdio.h>
/**
 * main - Entry point to our program that prints the first 50 Fibonacci numbers,
 * Return: Always 0 (Success)
 */
int main(void)
{
	long 1, nextFib = 3, firstFib = 1, secondFib = 2;
	
	printf("%d, %d ", firstFib, secondFib);
	for (i = 0; i < 47; i++)
	{

		printf("%d ", nextFib);
		firstFib = secondFib;
		secondFib = nextFib;
		nextFib = firstFib + secondFib;
	}
}

