#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 113)
			continue;
		if (n == 101)
			continue;
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}
