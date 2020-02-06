#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int n;

	for (n = 90; n > (90 - 26); n--)
		putchar(n);
	putchar('\n');
	return (0);
}
