#include <stdio.h>
/**
 * main - Entry point to main program that finds and prints
 * the sum of the even-valued fibonacci terms, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k = 0, firstFib = 1, secondFib = 2, sum = 0;

	while (secondFib < 4000000)
	{
		if (secondFib % 2 == 0)
			sum += secondFib;
		k = secondFib;
		secondFib += firstFib;
		firstFib = k;
	}
	printf("%d\n", sum);
	return (0);
}
