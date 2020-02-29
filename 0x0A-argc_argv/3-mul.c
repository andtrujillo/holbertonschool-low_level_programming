#include "holberton.h"
/**
 * main - entry point of function that only multiplies two numbers
 * @argc: integer that is the amount of arguments recieved by main
 * @argv: double pointer to one dimensional array of multiple string
 *  arguments
 * Return: 0 on success otherwise 1
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc  == 1)
		printf("0");

	int a = _atoi(argv[1]);
	int b = _atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
/**
* _atoi - Function that converts a character array to an integer
* @str_to: String to be converted to unsigned integer
* Return: integer
*/
int _atoi(char *str_to)
{
	int sign_count = 1;
	unsigned int result = 0;
	int work = 0;

	for (; *str_to != '\0'; str_to++)
	{
		if (*str_to == '-')
		{
			sign_count *= -1;
		}
		if (*str_to >= '0' && *str_to <= '9')
		{
			work = 1;
			result = ((result * 10) + (*str_to - '0'));
		}
		if (*str_to < '0' || *str_to > '9')
		{
			if (work)
				break;
		}
	}
	if (result == 0)
		result = 0;

	return (result * sign_count);
}
