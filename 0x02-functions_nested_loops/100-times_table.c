#include<stdio.h>
/**
 * print_times_table- Entry point of function that prints the times table of n
 * @n: The times table to be printed
 * Return: void (none)
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 0 && n >= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0,");
			for (j = 0; j <= n; j++)
			{
				if (j == n)
					printf("%3d", (i * j));
				else
					printf("%3d, ", (i * j));
			}
			putchar('\n');
		}
	}
}
