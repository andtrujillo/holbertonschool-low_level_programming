#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100, when encountering multiple of 3
 * or multiple of 5, print FizzBuzz.
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
