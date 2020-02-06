#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, z;

	for (n = 48; n < 58; n++)
	{
		for (z = 48; z < 58; z++)
		{

			putchar(n);
			putchar(z);
			if (n != 57 || z !=  57)
			{
				putchar(44);
			}
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
