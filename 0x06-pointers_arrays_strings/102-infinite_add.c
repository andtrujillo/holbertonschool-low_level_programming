#include "holberton.h"
/**
 * infinite_add - Function that takes two array of numbers and adds them
 * @first_num: First number to be added
 * @second_num: Second number to add to first number
 * Return: zero, on failure otherwise returns character array
 */
 char *infinite_add(char *first_num, char *second_num, char *buffer, int size)
 {
  int i;
  int result = 0;
  int carry = 0;
  /* Determining the length of 
   * our two passed arrays
   * and the size of the buffer.
   */
  int first_num_length = _strlen(first_num);
  int second_num_length = _strlen(second_num);
  int bufsize = _strlen(buffer);
  
  /* The result won't fit in passed function 
   * so return zero 
   */
  if (bufsize > size)
    return (0);
    
  /* Parse our data's index to find what values can
   * be carried over, since these numbers plus
   * the second_num is its own value because there
   * are no more numbers in the difference of arrays.
   */
  index = _abs(second_num_length - first_num_length);
  /* Fill the second number with zeros  
   * instead of null characters.
   */
  if (second_num_length > first_num_length)
  {
    for (i = 0; i < index; i++)
    {
      first_num[i] = 0;
    }
  }
  /* Fill the first number with zeros
   * instead of null characters.
   */
  if (first_num_length > second_num_length)
  {
    for (i = 0; i < index; i++)
    {
      second_num[i] = 0;
    }
  }
  if (first_num_length >= second_num_length)
  {
    for (i = first_num_length; i > index; i--)
    {
      result = first_num[i] + second_num[i] + carry;
    
      if (result >= 10)
      {
       carry = result / 10;
       buffer[i] = result % 10;
      }
      else
      {
        buffer[i] = result;
      }
    }
  }
  if (second_num_length >= first_num_length)
  {
    for (i = second_num_length; i > index; i--)
    {
      result = first_num[i] + second_num[i] + carry;
      
      if (result >= 10)
      {
        carry = result / 10;
        buffer[i] = result % 10;
      }
      else
      {
        buffer[i] = result;
      }
    }
  }
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
  else
    n *= -1
  return (n);
 }
 int _strlen(char *s)
 {
  int length = 0;
  while (*s++)
    length++;
  return (length);
 }
