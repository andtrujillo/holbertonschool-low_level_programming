#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/**
 * main - program that multiplies two numbers from cli
 * @argc: amount of arguments
 * @argv: vector argument consisting of two numbers
 * Return: 0 on success
 */
char **multiply(char *m1, char *m2, int l);

int main(int argc, char **argv)
{
	char *m1 = argv[1];
	char *m2 = argv[2];
	int strlength1;
	int strlength;

	/*char tmp = '0';  initialize with zero 

	int tl = 0;
	int start = 0;
	int end = 0;
	int a = 0;
	int b = 0;
*/
	if (argc != 3)
		return (1);

	strlength1 = (int)strlen(m1);
	strlength = (int)strlen(m2);
	
	if (strlength1 == strlength)
	{
		char **multiplied = multiply(m1, m2, strlength);
	}
	else
		return (0);
	/* fill in remaining holes of two different sized multiplicants 
	 * and set total length to each the same filling in the unsquare string
	 * with numbers that wont impact multiplication. As well so they line 
	 * up perfectly for multiplication step. 
	 *
*	if (strlength1 < strlength)
	{
		tmp = '0';
		end = strlength;
		start = 0;
		* reversing array *
		while (start < end)
		{
			tmp = m1[start];
			m1[start] = m1[end];
			m1[end] = tmp;
			start++;
			end--;
		}
		* total length is the greater value
		 * and the copied reversed array to array of 
		 * proper size to prevent segmentation
		 * fault to stop multiplication
		 *
		tl = strlength;
		for (a = 0; a < strlength; a++)
		{
			if (a >= strlength)
				r1[a] = 'x';
			else
				r1[a] = m1[a];
		}
	}
	else if (strlength1 > strlength)
	{
		tmp = '0';
		end = strlength;
		start = 0;
		 reversing array *
		while (start < end)
		{
			tmp = m1[start];
			m1[start] = m1[end];
			m1[end] = tmp;
			start++;
			end--;
		}
		* total length is the greater value
		 * and the copied reversed array to array of 
		 * proper size to prevent segmentation
		 * fault to stop multiplication
		 *
		tl = strlength1;
		for (a = 0; a < strlength1; a++)
		{
			if (a >= strlength)
				r1[a] = 'x';
			else
				r1[a] = m1[a];
		}
	}
	
	/// m1 or m2 is short so fill in with..? 
	 reversing array into str 
	for (start = tl; start > 1; start--, a++)
	{
		for (end = tl; end > 0; end--, b++)
		{
			if (strlength1 < tl)
			{
				str1[a][b] = 'x';
				strlength1++;
			}
			if (strlength < tl)
			{
				str1[a][b] = 'x';
				strlength++;
			}
			if (tl == strlength1 && tl == strlength)
			{
				c = (argv[start][end] - '0');
				str1[a][b] = c;
			}
		}
	}

	for (a = 0; a < tl; a++)
	{
		for (b = 0; b < tl; b++)
		{
			printf("%c", str1[a][b]);
		}
	}
*/
	/*
	for (end = 0; end < strlength || end < strlength1; end++)
	{
		printf("CHARACTER =%c CHARACTER =%c\t DECIMAL =%d DECIMAL =%d\n",
*(m2 + (start * strlength + end)),*(m1 + (start * strlength1 + end)),*(m2 + (start * strlength + end)) - '0',*(m1 + (start * strlength1 + end)) - '0');
	}
	for (start = 1; start <= (int)strlen(m1); start++)
	{
		for (end = 0; end < (int)strlen(m2); end++)
		{
			printf("%c * %c = %d\n", argv[start][end], argv[start + 1][end], (argv[start][end] - '0') * (argv[start + 1][end] - '0'));
		}
	}
	int i = 0;
	int j = 0;
	int result = 0;

	while(*(m1 + i))
	{
		while(*(m2 + j))
		{
			result = ('0' - argv[i][j]) * ('0' - argv[i][j]) + carry;
			printf("%d\n", result);
			i++;
		}
		j++;
	}
*/
	return (0);
}
char **multiply(char *m1, char *m2, int n)
{
	int i, ones_place = 0, j = 0;
	int carry = 0;
	int result = 0;

	char **add = (char **)malloc(sizeof(char *) * n * n);
	for (i = 0; i < n; i++)
		add[i] = (char *)malloc(i + sizeof(char) * n * n);

	while (n--)
	{
		while (n--)
		{
			result = (*m1 - '0') * (*m2 - '0') + carry;
			if (result > 10)
			{
				ones_place = result % 10;
				carry = result / 10;
			}
			else
				ones_place = result;
			
			if (j != n)
			{
				add[i][j] = ones_place;
			}
			j++;

			m1++;
		}

		i++;
		m2++;

	}
	return (add);
}
