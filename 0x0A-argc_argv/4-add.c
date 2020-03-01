#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);

/**
 * main - Main program that adds multiple numbers sent as arguments to function
 * @argc: integer, the amount of arguments passed from the command line
 * @argv: double pointer to a one dimensional array of multiple strings
 * Return: 0 on success otherwise 1 if one of the passed arguments are
 * not numbers.
 */
int main(int argc, char **argv)
{

	int i, flag = 0, sum = 0;

	if (argc == 0)
		printf("0\n");


	for (i = 1; i < argc; i++)
	{
		if (!_atoi(argv[i]))
		{
			printf("Error\n");
			flag = 1;
		}
	}


	argv++;

	if (!flag)
	{
		while (argc > 0 && *argv != '\0')
			sum += _atoi(*argv++);

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	}

	return (flag);
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
