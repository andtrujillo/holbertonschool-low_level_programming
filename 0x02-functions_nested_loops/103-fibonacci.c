#include <stdio.h>
/**
 * main - Entry point to main program that finds and prints
 * the sum of the even-valued fibonacci terms, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int max = 4000000;
	long int nextFib = 0, firstFib = 1, secondFib = 2, n = 0;

	while(nextFib < max)
	{
		nextFib = firstFib + secondFib;
		if ((nextFib % 2) == 0)
			n+= nextFib;
		
		firstFib = secondFib;
		secondFib = nextFib;
	}
	printf("%d\n", n);
	return (0);
}
