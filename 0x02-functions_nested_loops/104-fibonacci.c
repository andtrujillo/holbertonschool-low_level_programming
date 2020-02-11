#include <stdio.h>
/**
 * main - Entry point to our program that prints the 98th Fibonacci number
 * starting from the first number 1 and the second number 2.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, start_print = 1;
	float nextFib = 0, firstFib = 1, secondFib = 2;

	for (i = 0; i < 98; i++)
	{
		if (start_print)
		{
			printf("%.0f, %.0f, ", firstFib, secondFib);
		}

		nextFib = firstFib + secondFib;
		printf("%.0f ", nextFib);

		if (start_print)
			putchar(',');

		firstFib = secondFib;
		secondFib = nextFib;
		start_print = 0;
	}
	putchar('\n';
	return (0);
}
