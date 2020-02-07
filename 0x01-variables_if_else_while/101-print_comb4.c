#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, k, m;

	n = '0';
	while (n <= '7')
	{
		k = n + 1;
		while (k <= '8')
		{
			m = k + 1;
			while (m <= '9')
			{
				putchar(n);
				putchar(k);
				putchar(m);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
