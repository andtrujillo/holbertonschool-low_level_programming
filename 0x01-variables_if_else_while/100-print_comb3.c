#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, offset = 0;

	for (n = 48; n < 58; n++)
	{

		for (m = 48 + offset; m < 58; m++)
		{
			putchar(n);
			putchar(m);

			if (n == 57 && m == 57)
				break;

			putchar(44);
			putchar(32);
		}
		offset++;
	}
	putchar('\n');
	return (0);
}

