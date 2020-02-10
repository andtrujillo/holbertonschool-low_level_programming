#include <stdio.h>
/**
 * main - Entry point of function that prints the times table of n
 * @n: The times table to be printed
 * Return: void (none)
 */
void print_times_table(void)
{
	int i, j;
	if (n < 16)
	{
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if( (n-1) == i)
					printf("%d",i*j);
				else
					printf("%d, ", i*j);
			}
			putchar('\n');
		}
	}
	return (0);
}
