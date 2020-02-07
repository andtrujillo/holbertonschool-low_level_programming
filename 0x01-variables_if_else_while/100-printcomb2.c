/**
 * Program that prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */
#include <stdio.h>
/**
 * main - Entry Point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, counter = 0;
	for (n = 48; n < 58; n++)
	{
		
		for (m = 48+counter ; m < 58; m++)
		{
			putchar(n);
			putchar(m);
		
			if( n == 57 && m == 57)
				break;
	
			putchar(44);
			putchar(32);
		}
		counter++;
	}
	putchar('\n');
	return 0;
}

