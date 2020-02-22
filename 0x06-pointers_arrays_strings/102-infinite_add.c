#include "holberton.h"
/**
 * infinite_add - Function that takes two array of numbers and adds them
 * @first: First number to be added
 * @second: Second number to add to first number
 * Return: zero, on failure otherwise returns character array
 */
char *infinite_add(char *first, char *second, char *r, int size)
{
	int i;
	int result = 0;
	int carry = 0;
	
	int f_l = _strlen(first);
	int s_l = _strlen(second);
	int b_sz = _strlen(r);
	int index1 = _abs(f_l-s_l);
	for (i = f_l; i > f_l; i--)
	{
		result = (first[i] - '0') + (second[i] - '0') + carry;
		if (result >= 10)
		{
			carry = result / 10;
			r[i] = result % 10;
			
			if (i == index1)
				break;
		}
		else
		{
			r[i] = result;
		}
	}
	while(i != 0)
	{
		r[i] = 0 + (second[i] - '0');
		i--;
	}
	return (r);
}
/**
 * _abs - Function that returns absolute value of integer
 * @n: Number passed to function to return the absolute 
 * Return: integer always (Success)
 */
 int _abs(int n)
 {
  if (n > 0)
    n *= 1;
  else if (n < 0)
    n *= -1;
else
n = 0;
  return (n);
 }
 int _strlen(char *s)
 {
  int length = 0;
  while (*s++)
    length++;
  return (length);
 }
