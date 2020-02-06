#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n,z;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		for (z = 0; z < 10; z++)
			putchar(z);
		
		putchar(', ');
	}
	putchar('\n');
	return (0);
}
