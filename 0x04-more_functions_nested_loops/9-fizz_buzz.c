#include <stdio.h>
/**
 * print_FizzBuzz - Function that prints multiples of 3 as Fizz and multiples of 5
 * as Buzz and FizzBuzz when the number is a both a multiple of 3 & 5.
 * Return: void (none)
 */ 
void print_FizzBuzz(void)
{

	int i, print_space = 1;

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

		if (print_space)
		{
			putchar(' ');
			if (i == 100)
				print_space = 0;
		}
	}
	putchar('\n');
}

/**
 * main - Prints numbers from 1 to 100, when encountering multiple of 3
 * or multiple of 5, print FizzBuzz.
 * Return: Always 0
*/
int main(void)
{
	print_FizzBuzz();
	return (0);
}
