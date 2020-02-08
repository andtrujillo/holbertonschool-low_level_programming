#include<stdio.h>
/**
* main - Entry point to our main function that prints two, two digit numbers
*
* Return: 0
*/
int main(void)
	{
	int a, b;
	int h, j, k, l;

	for (a = 0; a <= 99; a++)
	{
		h = a / 10;
		j = a % 10;

		for (b = 0; b <= 99; b++)
		{
			k = b / 10;
			l = b % 10;

			if (h < k || (h == k && j < l))
			{
				putchar(h + 48);
				putchar(j + 48);
				putchar(' ');
				putchar(k + 48);
				putchar(l + 48);

				if (!(h == 9 && j == 8))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
