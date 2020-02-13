#include <stdio.h>
/**
 * main - Entry point to our program that prints the 98th Fibonacci number
 * starting from the first number 1 and the second number 2.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	unsigned long current_f = 0;
	unsigned long current_b = 0;
	unsigned long first_f = 0;
	unsigned long	first_b = 2;
	unsigned long second_f = 0;
	unsigned long	second_b = 1;

	printf("%lu, %lu, ", second_b, first_b);
	while (count < 96)
	{
		current_f = first_f + second_f;
		current_b = first_b + second_b;

		if (current_b > 1000000)
		{
			current_f += current_b / 1000000;
			current_b = current_b % 1000000;
		}

		second_f = first_f;
		second_b = first_b;
		first_f = current_f;
		first_b = current_b;

		if (current_f == 0)
		{
			printf("%lu, ", current_b);
		}
		else
		{
			if (count != 95)
				printf("%lu%06lu, ", current_f, current_b);
		}
		if (count == 95)
			printf("%lu%06lu\n", current_f, current_b);
		count++;
	}
	return (0);
}
