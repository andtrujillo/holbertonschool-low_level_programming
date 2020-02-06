#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	puchar('\n');
	return (0);
}
