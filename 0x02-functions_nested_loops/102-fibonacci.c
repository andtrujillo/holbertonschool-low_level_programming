#include <stdio.h>
/**
 * main - Entry point to our program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int 1, nextFib = 0, firstFib = 1, secondFib = 2;
	
	printf("%d, %d ", firstFib, secondFib);
	for (i = 0; i < 49; i++)
	{

		nextFib = firstFib + secondFib;
		printf("%d ", nextFib);
		
		firstFib = secondFib;
		secondFib = nextFib;

	}
}

