#include "holberton.h"
/**
* _atoi - Function that converts a string to an integer
* @str_to: String to be converted to signed integer value
* Return: integer
*/
int _atoi(char *str_to)
{
	int sign_count = 0;
	unsigned int result = 0;
	int work = 0;

	for (; *str_to != '\0'; str_to++)
	{
		if (*str_to == '-')
		{
			sign_count--;
		}
		if (*str_to == '+')
		{
			sign_count++;
		}
		if (*str_to >= '0' && *str_to <= '9')
		{
			work = 1;
			result = ((result * 10 + *str_to) - '0');
		}
		if (*str_to < '0' || *str_to > '9')
		{
			if (work)
				break;
		}
	}
	if (sign_count >= 0)
	{
		sign_count = 1;
		result = result * 1;
	}
	else if (sign_count < 0)
	{
		sign_count = -1;
		result = result * -1;
	}
	if (result == 0)
		result = 0;

	return (result);
}
