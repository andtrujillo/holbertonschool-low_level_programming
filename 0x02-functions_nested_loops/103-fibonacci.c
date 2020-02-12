#include <stdio.h>
/**
 * main - Entry point to main program that finds and prints
 * the sum of the even-valued fibonacci terms, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long nextFib = 0, n = 0, max = 4000000, sum = 0, firstFib = 1, secondFib = 2;

	while(firstFib < max && secondFib < max)
	{
		if ((nextFib % 2) == 0)
			n+= sum;
		sum = firstFib + secondFib;
		firstFib = secondFib;
		secondFib = nextFib;
	}
	printf("%ld\n", n);
	return (0);
}
