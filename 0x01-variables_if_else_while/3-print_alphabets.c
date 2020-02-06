#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 65; n < (65 + 26); n++)
		putchar(n);
	for (n = (65 + 26); n < ((65 + 26) + 26); n++)
		putchar(n);
	putchar('\n');
	return 0;
}

