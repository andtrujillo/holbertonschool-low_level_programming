#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100, when encountering multiple of 3
 * or multiple of 5, print FizzBuzz.
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			print("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else 
		{
			printf("%d", i);
		}
		putchar(' ');
	}

	putchar('\n');
}
